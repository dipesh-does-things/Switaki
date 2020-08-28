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

#ifndef SWITAKI_H_
#define SWITAKI_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

#include <stdio.h> // debug

#include "types.h"
#include "cpu.h"
#include "flags.h"
#include "memory.h"
#include "registers.h"
#include "operations.h"
#include "instructions.h"

extern char *image;

char *read_image(char const *file_path);
int switaki(char const *image_file_path);

#endif // SWITAKI_H_
