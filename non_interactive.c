#include "shell.h"

/**
 * non_interactive - Run the shell in non-interactive mode
 *
 * This function runs the shell in non-interactive mode, where it reads
 * commands from a stream (e.g., from a file or another program's output)
 * rather than directly from user input. It continuously reads lines from
 * the stream, splits them into arguments, and executes the commands or
 * built-in functions using the execute_args function. It continues this
 * process until the end of the stream is reached or until a termination
 * condition is met.
 *
 * Return: This function does not return any value directly. However, it
 * may exit the program with a status code based on the execution result
 * of the commands or built-in functions.
 */

void non_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	while (status == -1)
	{
		line = read_stream();
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
