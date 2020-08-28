/*
 * Copyright (c) 2020, Nathan Casabieille
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

#ifndef FLAGS_H_
#define FLAGS_H_

#include "types.h"

enum flags {
    FLAG_CF    = 1 << 0,  // Carry
    FLAG_RF    = 1 << 1,  // Reserved
    FLAG_PF    = 1 << 2,  // Parity
    FLAG_XF    = 1 << 3,  // Reserved
    FLAG_AF    = 1 << 4,  // Auxiliary carry
    FLAG_YF    = 1 << 5,  // Reserved
    FLAG_ZF    = 1 << 6,  // Zero
    FLAG_SF    = 1 << 7,  // Sign
    FLAG_TF    = 1 << 8,  // Trap
    FLAG_IF    = 1 << 9,  // Interruption
    FLAG_DF    = 1 << 10, // Direction
    FLAG_OF    = 1 << 11, // Overflow
    FLAG_IOPL1 = 1 << 12, // I/O privilege level
    FLAG_IOPL2 = 1 << 13, // I/O privilege level
    FLAG_NT    = 1 << 14, // Nested task flag
    FLAG_EF    = 1 << 15  // Reserved
};

void reset_flags(cpu_t *cpu);
void clear_flag(cpu_t *cpu, uint16_t flag);

void set_flag(cpu_t *cpu, uint16_t flag);
void update_flags(cpu_t *cpu, uint8_t reg);

#endif // FLAGS_H_
