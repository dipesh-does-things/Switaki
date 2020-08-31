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

uint8_t add8(cpu_t *cpu, uint8_t n1, uint8_t n2)
{
    uint16_t result = (uint16_t)n1 + (uint16_t)n2;

    if (result > UINT8_MAX) {
        set_flag(cpu, FLAG_CF);
        return (UINT8_MAX);
    }
    return (result &= UINT8_MAX);
}

uint16_t add16(cpu_t *cpu, uint16_t n1, uint16_t n2)
{
    uint32_t result = (uint32_t)n1 + (uint32_t)n2;

    if (result > UINT16_MAX) {
        set_flag(cpu, FLAG_CF);
        return (UINT16_MAX);
    }
    return (result &= UINT16_MAX);
}
