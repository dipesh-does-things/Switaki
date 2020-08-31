/*
 * Copyright (c) 2020, Switaki-Dev
 *
 * This file is part of Switaki
 *
 * Switaki is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Switaki is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * with Switaki.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "switaki.h"

int switaki(char const *image_file_path)
{
    cpu_t *cpu;
    uint16_t instr;
    bool_t running;

    cpu = init_cpu();
    if (!cpu) {
      return (84);
    }
    instr = 0;
    running = true;
    image = read_image(image_file_path);
    if (!image) {
        return (84);
    }
    while (running) {
        instr = fetch_instruction(cpu->registers[REG_IP]);
        decode_instruction(cpu, instr);
        cpu->registers[REG_IP]++;
    }
    free(image);
    destroy_cpu(cpu);
    return (0);
}
