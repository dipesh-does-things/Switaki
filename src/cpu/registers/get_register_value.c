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

uint8_t get_reg8_value(cpu_t *cpu, uint8_t reg16, uint8_t reg8)
{
    if (reg8 >= REG_AH) {
        return (cpu->registers[reg16] >> 8);
    }
    return (cpu->registers[reg16] & UINT16_MAX);
}

inline __attribute__((always_inline)) uint16_t get_reg16_value(cpu_t *cpu, uint8_t reg16)
{
    return (cpu->registers[reg16]);
}
