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

uint16_t *init_instructions(void)
{
    uint16_t *instructions;

    instructions = malloc(sizeof(uint16_t) * (NBR_OF_INSTRUCTIONS));
    if (instructions == NULL) {
        return (NULL);
    }
    instructions[0] = OPCODE_ADD_rm8_r8;
    instructions[1] = OPCODE_ADD_rm16_r16;
    instructions[2] = OPCODE_ADD_r8_rm8;
    instructions[3] = OPCODE_ADD_r16_rm16;
    instructions[4] = OPCODE_ADD_al_imm8;
    instructions[5] = OPCODE_ADD_ax_imm16;
    instructions[6] = OPCODE_ADD_rm8_imm8;
    instructions[7] = OPCODE_ADD_rm16_imm16;
    instructions[8] = OPCODE_ADD_rm16_imm16;
    instructions[9] = OPCODE_HLT;
    return (instructions);
}
