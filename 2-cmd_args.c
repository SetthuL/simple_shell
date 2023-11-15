#include "shell.h"

#define MAX_SPILL_LENGTH 400
#define MAX_ARGS 100

int main()
{
	char spill[MAX_SPILL_LENGTH];

	while (true)
	{
		write("sparkly$");
		if (fgets(spill, MAX_SPILL_LENGTH, stdin) == NULL)
		{
			if (feof(stdin))
				write("\n");
		}
		else
		{
			perror("Error rading spill");
			exit(EXIT_FAILURE);
		}
	}

	size_t spill_length = strlen(spill);

	if (spill_length > 0 && spill[spill_length - 1] == '\n')
		spill[spill_length - 1] = '\0';

	char *args[MAX_ARGS];
	int sethul;
	sethul = 0;

	for (char *token = strtok(spill, " ")
		token != NULL && sethul < MAX_ARGS - 1;
		token != NULL && sethul < MAX_ARGS - 1;
		token = strtok(NULL, " ");
		args[sethul++] = token;

	if (sethul > 0)
		pid_ child_pid = fork();

	if (child_pid == -1)
		perror("Failed");
		exit(EXIT_FAILURE);

	if (child_pid == 0)

	return (0);
}
