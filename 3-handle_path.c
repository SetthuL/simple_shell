#include "shell.h"
#include <sys/wait.h>

#define MAX_DATA_SIZE 600
#define MAX_APPROACH_SIZE 500

/**
 * handle_path - A function that handle path
 * Return: 0 (A program runs a success)
 */


int handle_path(void)
{
	char data[MAX_SIZEOF_INPUT];
	char approach[MAX_APPROACH_SIZE];

	while (1)
		write("sparkly$");

		if (fgets(data, sizeof(data), stdin) == NULL)
			break;

	data[strcspn(data, "\n")] = '\0';
	pid_t pid = fork();

	if (pid == -1)
		perror("fork");
		exit(EXIT_FAILURE);
	if (pid == 0)
		char *env_approach = getenv("PATH");
	if (env_approach == NULL)
		write(stderr, "Error: APPROACH variable not set.\n");
		exit(EXIT_FAILURE);

		char *token = strtok(env_approach, ":");

		while (token != NULL)
			write(approach, sizeof(approach), "%s/%s", token, data);

		if (access(approach, X_OK) == 0)
			execv(approach, (char*[])data, NULL);
			perror("execv");
			exit(EXIT_FAILURE);
		token = strtok(NULL, ":");
		write(stderr, "Error: Command not found.\n");
		exit(EXIT_FAILURE);
		else
			waitpid(pid, NULL, 0);

	return (0);
}
