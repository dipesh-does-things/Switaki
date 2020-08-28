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

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"

#define REGS_COUNT (14)

enum registers_16 {
    REG_AX = 0, // Accumulator
    REG_CX = 1, // Counter
    REG_DX = 2, // Data
    REG_BX = 3, // Base
    REG_SP = 4, // Stack pointer
    REG_BP = 5, // Base pointer
    REG_SI = 6, // Source index
    REG_DI = 7, // Destination index
    REG_IP = 8, // Instruction pointer
    REG_FLAGS = 9
};

enum registers_8 {
    REG_AL = 0,
    REG_CL = 1,
    REG_DL = 2,
    REG_BL = 3,
    REG_AH = 4,
    REG_CH = 5,
    REG_DH = 6,
    REG_BH = 7
};

uint16_t *init_registers(void);

void set_reg16_value(cpu_t *cpu, uint8_t reg16, uint16_t value);
void set_reg8_value(cpu_t *cpu, uint8_t reg16, uint8_t reg8, uint8_t value);

uint16_t get_reg16_value(cpu_t *cpu, uint8_t reg16);
uint8_t get_reg8_value(cpu_t *cpu, uint8_t reg16, uint8_t reg8);

#endif // REGISTERS_H_
