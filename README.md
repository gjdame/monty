# Monty Bytecode Interpreter

### Documentation

## Installation
- compile with the following:
  - gcc -Wall -Werror -Wextra -pedantic *.c -o monty
  - usage: ./monty <filename>
    - filename should contain the Operators
    - One operator per line
    - spaces and newlines are ignored
    - '#' sign represent comments and the line will be ignored

## Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

- monty.h - contains all the structure and prototype
- main.c - main function for monty interpreter

## Helper
- newline_check.c - checks if the first character in a line is a newline
- tokenizer.c - tokenizes the command and value in the line
- find_op.c - uses the first token (command) to find what operator(instruction) to use
- list_len.c - returns the number of element in the stack
- free_l.c - free everything on the stack
- check_val.c - checks if everything on the second command are all digits

## Operator Instruction
- op_push.c - pushes value to stack
  - usage: push 123
- op_pall.c - prints everything on the stack LIFO
  - usage: pall
- op_pint.c - prints the top value of the stack
  - usage: pint
- op_add.c - adds the top two elements of the stack
  - usage: add
- op_sub.c - subtracts the top element of the stack from the second top element of the stack
  - usage: sub
- op_swap.c - swaps the top two elements of the stack
  - usage: swap
- op_pop.c - removes the top element of the stack
  - usage: pop
- op_nop.c - doesn't do anything
  - usage: nop
- op_div - divides the second top element of the stack by the top element of the stack
  - usage: div
- op_mul - multiplies the second top element of the stack with the top element of the stack
  - usage: mul
- op_mod - computes the rest of the division of the second top element of the stack by the top element of the stack
  - usage: mod
- op_pchar - prints the char at the top of the stack, followed by a new line
  - usage: pchar
- op_pstr - prints the string starting at the top of the stack, followed by a new line.
  - usage: pstr
- op_rotl - rotates the stack to the top. The top element of the stack becomes the last one, and the second top element of the stack becomes the first one
  - usage: rotl
- op_rotr - rotates the stack to the bottom. The last element of the stack becomes the top element of the stack
  - usage: rotr
### Authors
Gregory Dame
Spencer Taylor