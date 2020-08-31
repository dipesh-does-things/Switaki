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

cpu_t *init_cpu(void)
{
    cpu_t *cpu;

    cpu = malloc(sizeof(cpu));
    if (!cpu) {
        return (NULL);
    }
    cpu->memory = init_memory();
    cpu->registers = init_registers();
    if (!cpu->memory || !cpu->registers) {
        destroy_cpu(cpu);
        return (NULL);
    }
    return (cpu);
}
