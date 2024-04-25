#include "shell.h"

/**
 * execute_args - check if command is a builtin or a process
 * @args: command 
 *
 * Return: (0) if sucessful, otherwsise (1)
 */

int execute_args(char **args)
{
	if (args[0] == NULL)
	{
		return (-1);
	}

	if (strcmp(args[0], "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else if (strcmp(args[0], "env") == 0)
	{
		int i = 0;
		while (environ[i] != NULL)
		{
			printf("%s\n", environ[i]);
			i++;
		}
		return (0);
	}
	else
	{
		return (new_process(args));
	}
}
