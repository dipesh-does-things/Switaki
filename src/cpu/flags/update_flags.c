/*
 * Copyright (c) 2020, Switaki-Dev
 *
 * This file is part of Switaki
 *
 * Switaki is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
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

void update_flags(cpu_t *cpu, uint8_t reg)
{
    if (cpu->registers[reg] % 2 == 0) {
        set_flag(cpu, FLAG_PF);
    }
    if (cpu->registers[reg] == 0) {
        set_flag(cpu, FLAG_ZF);
    }
    if (cpu->registers[reg] >> 15) {
        set_flag(cpu, FLAG_SF);
        set_flag(cpu,FLAG_OF);
    }
}
