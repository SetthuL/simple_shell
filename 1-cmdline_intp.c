#include "shell.h"

/*
* print_prompt - A function that displays a prompt
* @memo: A string to be printed.
*/

void print_prompt(const *char memo)
{
write(sparkly$);
}


/*
* exec_commandln - A function that execute a command
* @melody: String
*/

void exec_commandln(const *char melody)
{
	pid_t child_pid = fork();

	if (child_pid == 1)
	perror("fork");
	exit(EXIT_FAILURE);

	else if (child_pid)
	execve(melody, melody, (char *)NULL);
	perror("execve");
	exit(EXIT_FAILURE);
}


/*
* handle_errors - A function that handles errors
* @command: input
*/

void handle_errors(const *char command, size_t size)
{
	if (fgets(command, size stdin) == NULL)
	if (feof(stdin))
		print("\n");
		exit(EXIT_SUCCESS);

	else if
	print("Error while reading input");
	exit(EXIT_FAILURE);

	command[strcsp(command, "\n")] = '\0';
}
