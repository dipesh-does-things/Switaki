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

#include "switaki.h"

operation_t *init_operations()
{
    operation_t *operations;

    operations = malloc(sizeof(operation_t) * (NBR_OF_INSTRUCTIONS));
    if (operations == NULL) {
        return (NULL);
    }
    // need to add operations functions
    operations[0] = NULL;
    operations[1] = NULL;
    operations[2] = NULL;
    operations[3] = NULL;
    operations[4] = NULL;
    operations[5] = NULL;
    operations[6] = NULL;
    operations[7] = NULL;
    operations[8] = NULL;
    operations[9] = NULL;
    return (operations);
}
