
##
## Copyright (c) 2020, Switaki-Dev
##
## This file is part of Switaki
##
## Switaki is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or
## (at your option) any later version.
##
## Switaki is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## with Switaki.  If not, see <https://www.gnu.org/licenses/>.
##

CC = gcc

NAME = Switaki

OPTIMIZER = 2

IDIR = include/

CFLAGS += -I $(IDIR)
CLAGS  += -O $(OPTIMIZER)
CFLAGS += -W -Wall -Wextra -Werror -Wpedantic
#CFLAGS += -g

# --- CPU

CPU_DIR   = cpu/
CPU_FILES = $(FLAGS)      \
            $(STACK)      \
            $(MEMORY)     \
            $(REGISTERS)  \
            init_cpu.c    \
            destroy_cpu.c

CPU = $(addprefix $(CPU_DIR), $(CPU_FILES))

FLAGS_DIR   = flags/
FLAGS_FILES = set_flag.c     \
              clear_flag.c   \
              reset_flags.c  \
              update_flags.c

FLAGS = $(addprefix $(FLAGS_DIR), $(FLAGS_FILES))

MEMORY_DIR   = memory/
MEMORY_FILES = mem_read.c           \
               mem_write.c          \
               get_address.c        \
               init_memory.c        \
               create_memory_area.c

MEMORY = $(addprefix $(MEMORY_DIR), $(MEMORY_FILES))

REGISTERS_DIR   = registers/
REGISTERS_FILES = init_registers.c     \
                  set_register_value.c \
                  get_register_value.c

REGISTERS = $(addprefix $(REGISTERS_DIR), $(REGISTERS_FILES))

# --- CPU

# --- IMAGE

IMAGE_DIR   = image/
IMAGE_FILES = read_image.c

IMAGE =  $(addprefix $(IMAGE_DIR), $(IMAGE_FILES))

# --- IMAGE

# --- INSTRUCTIONS

INSTRUCTIONS_DIR   = instructions/
INSTRUCTIONS_FILES = fetch_instruction.c  \
                     init_instructions.c  \
                     decode_instruction.c

INSTRUCTIONS = $(addprefix $(INSTRUCTIONS_DIR), $(INSTRUCTIONS_FILES))

# --- INSTRUCTIONS

# --- OPERATIONS

OPERATIONS_DIR   = operations/
OPERATIONS_FILES = add.c             \
                   sign_extend.c     \
                   init_operations.c

OPERATIONS = $(addprefix $(OPERATIONS_DIR), $(OPERATIONS_FILES))

# --- OPERATIONS

# --- SRCS

SRCS_DIR   = src/
SRCS_FILES = $(CPU)          \
             $(IMAGE)        \
             $(OPERATIONS)   \
             $(INSTRUCTIONS) \
             main.c          \
             switaki.c

SRCS = $(addprefix $(SRCS_DIR), $(SRCS_FILES))

# --- SRCS

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
