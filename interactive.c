#include "shell.h"

/**
 * interactive - Interactive shell mode
 *
 * This function implements the interactive mode of the shell. It continuously
 * prompts the user with a "$" symbol, reads the input line, splits it into
 * arguments, and executes the command or built-in function using the
 * execute_args function. If the execution status is greater than or equal to
 * zero, the function terminates the program with the provided status code.
 *
 * Return: This function does not return.
 */

void interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	while (status == -1)
	{
		printf("$ ");
		line = read_line();
		args = split_line(line);
		status = execute_args(args);

		free(line);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	}
}
