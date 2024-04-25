#include "shell.h"

/**
 * execute_builtin - Execute a built-in command
 * @args: Array of strings containing the command and its arguments
 *
 * Return: 0 on success, -1 on failure
 */

int execute_builtin(char **args)
{
	if (strcmp(args[0], "env") == 0)
	{
		int i = 0;
		while (environ[i] != NULL)
		{
			printf("%s\n",environ[i]);
			i++;
		}
	}
	else if (strcmp(args[0], "exit") == 0)
	{
		if (args[1])
		{
			return (atoi(args[1]));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		fprintf(stderr, "Unknown builtin command: %s\n", args[0]);
	}
	return 0;
}
