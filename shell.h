#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void print_prompt(void);
void print_sparkly(const char *memo);
int handle_path(void);
void handle_errors(const *char command, size_t size);
void exec_commandln(const *char melody);
int main(void);

#endif
