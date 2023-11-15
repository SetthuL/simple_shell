#include "shell.h"

#define MAX_DATA_SIZE 600

/**
 * exec_commandln - A function that execute command line
 * @cmdline: Input
 * Return: 0
 */

void exec_commandln(char *cmdline)
{
	write("Command line excecuting : %s\n" cmdline);
}

/**
 * exit_shell - A function that exits shell
 * Return: 0
 */

int exit_shell(void)
{
	char data[MAX_DATA_SIZE];

	while (true)
	{
		write("Exiting shell$");
		fgets(data, sizeof(data), stdin);
	}
	data[strcspn(data, "\n")] = '\0';

	if (strcmp(data, "exit") == 0)
	{
		write("Goodbye shell$!\n");
		break;
	}

	exec_commandln(data);
	return (0);
}
