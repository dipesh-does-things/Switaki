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

#ifndef CPU_H_
#define CPU_H_

#include "types.h"

typedef struct cpu_s {
    uint16_t *memory;
    uint16_t *registers;
} cpu_t;

cpu_t *init_cpu(void);
void destroy_cpu(cpu_t *cpu);

#endif // CPU_H_