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

#include "switaki.h"

memory_area_t *create_memory_area(uint16_t segment, uint16_t offset, uint16_t size)
{
    memory_area_t *memory_area;

    memory_area = malloc(sizeof(memory_area_t));
    if (!memory_area) {
        return (NULL);
    }
    memory_area->size = size;
    memory_area->offset = offset;
    memory_area->segment = segment;
    memory_area->address = calculate_address(segment, offset);
    return (memory_area);
}
