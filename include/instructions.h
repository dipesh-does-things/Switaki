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

#ifndef INSTRUCTIONS_H_
#define INSTRUCTIONS_H_

#include "types.h"

#define NBR_OF_INSTRUCTIONS (10)

/*
    add8 = 8-bits address of I/O port
    r8 = 8-bits register
    r16 = 16-bits register
    m8 = memory byte (direct addressing only)
    m16 = memory word (direct addressing only)
    rm8 = 8-bits register / memory byte
    rm16 = 16-bits register / memory word
    imm8 = 8-bits immediate
    imm16 = 16-bits_immediate
*/

typedef union modrm_s {
  struct {
    uint8_t rm : 3;
    uint8_t reg : 3;
    uint8_t mod : 2; // determines the addressing modes of the operands
  } bit;
  uint8_t value;
} modrm_t;

typedef struct instruction_s {
    uint8_t opcode : 6;
    uint8_t direction : 1;
    uint8_t word : 2;
    modrm_t modrm;
    uint8_t low_order_displacement: 8;
    uint16_t high_order_displacement : 16;
} instruction_t;

enum opcodes{
    OPCODE_ADD_rm8_r8     = 0x00,
    OPCODE_ADD_rm16_r16   = 0x01,
    OPCODE_ADD_r8_rm8     = 0x02,
    OPCODE_ADD_r16_rm16   = 0x03,
    OPCODE_ADD_al_imm8    = 0x04,
    OPCODE_ADD_ax_imm16   = 0x05,
    OPCODE_ADD_rm8_imm8   = 0x80,
    OPCODE_ADD_rm16_imm16 = 0x81,
    OPCODE_ADD_rm16_imm8  = 0x83,
    OPCODE_HLT            = 0x60
};

uint16_t *init_instructions(void);
uint16_t fetch_instruction(uint16_t address);
void decode_instruction(cpu_t *cpu, uint16_t instr);

#endif // INSTRUCTIONS_H_
