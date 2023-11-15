#include "shell.h"
#include <sys/wait.h>

#define MAX_DATA_SIZE 600
#define MAX_APPROACH_SIZE 500

/**
 * main - Entry point
 * Return: 0 (A program runs a success)
 */


int main()
{
	char data[MAX_SIZEOF_INPUT];
	char approach[MAX_APPROACH_SIZE];

	while (1)
	{
        	write("sparkly$");

		if (fgets(data, sizeof(data), stdin) == NULL)
		{
			break; // Handle Ctrl+D or EOF for graceful exit
		}

	data[strcspn(data, "\n")] = '\0';

	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (pid == 0)
	{
		char* env_approach = getenv("PATH");
	if (env_approach == NULL)
	{
		fprintf(stderr, "Error: APPROACH variable not set.\n");
		exit(EXIT_FAILURE);
	}


		char* token = strtok(env_approach, ":");

		while (token != NULL)
		{
			snprintf(approach, sizeof(approach), "%s/%s", token, data);

		if (access(approach, X_OK) == 0)
		{
			execv(approach, (char*[]){data, NULL});
			perror("execv");
			exit(EXIT_FAILURE);
		}

                token = strtok(NULL, ":");
            }

		fprintf(stderr, "Error: Command not found.\n");
		exit(EXIT_FAILURE);
		}
		else
		{
			waitpid(pid, NULL, 0);
		}
	}

	return (0);
}
