#include "shell.h"

void print_sparkly(const char *memo)
{
	write(STDOUT_FILENO, memo, strlen(memo));
}
