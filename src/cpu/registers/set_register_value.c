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

void set_reg8_value(cpu_t *cpu, uint8_t reg16, uint8_t reg8, uint8_t value)
{
    if (reg8 >= REG_AH) {
        cpu->registers[reg16] = (uint16_t)(((uint16_t)value << 8) + (cpu->registers[reg16] & UINT8_MAX));
    }
    else {
        cpu->registers[reg16] = (uint16_t)value + (cpu->registers[reg16] & UINT16_MAX);
    }
}

inline __attribute__((always_inline)) void set_reg16_value(cpu_t *cpu, uint8_t reg16, uint16_t value)
{
    cpu->registers[reg16] = value;
}
