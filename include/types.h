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

#ifndef TYPES_H_
#define TYPES_H_

#define UINT8_MAX (255)
#define UINT16_MAX (65535U)

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

typedef enum {
    false = 0,
    true = 1
} bool_t;

#endif // TYPES_H_
