#include "shell.h"

/**
 * execute_args - check if command is a builtin or a process
 * @args: command 
 *
 * Return: (0) if sucessful, otherwsise (1)
 */

int execute_args(char **args)
{
	if (args[0] == 0)
	{
		return (-1);
	}

	if (strcmp(args[0], "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	return (0);
}
