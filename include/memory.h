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

#ifndef MEMORY_H_
#define MEMORY_H_

#include "types.h"

typedef struct memory_area_s {
    uint16_t size;
    uint16_t offset;
    uint16_t segment;
    uint32_t address;
} __attribute__((packed)) memory_area_t;

uint16_t *init_memory(void);

uint16_t mem_read(cpu_t *cpu, uint16_t address);
void mem_write(cpu_t *cpu, uint16_t address, uint16_t value);

uint32_t calculate_address(uint16_t segment, uint16_t offset);
memory_area_t *create_memory_area(uint16_t segment, uint16_t offset, uint16_t size);

#endif // MEMORY_H_
