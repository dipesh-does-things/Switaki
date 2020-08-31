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

#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "types.h"

typedef void (*operation_t)(cpu_t *cpu);

operation_t *init_operations(void);

uint8_t add8(cpu_t *cpu, uint8_t reg, uint8_t operand);
uint16_t add16(cpu_t *cpu, uint16_t reg, uint16_t operand);
uint16_t sign_extend(uint16_t x, int bit_count);

#endif // OPERATIONS_H_
