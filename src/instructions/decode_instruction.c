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

void decode_instruction(cpu_t *cpu, uint16_t instr)
{
    uint16_t *instructions;
    operation_t *operations;

    instructions = init_instructions();
    operations = init_operations();
    if (instructions != NULL && operations != NULL) {
        for (int i = 0; i < NBR_OF_INSTRUCTIONS; i++) {
            if (instr == instructions[i]) {
                operations[i](cpu);
            }
        }
    }
    free(instructions);
    free(operations);
}
