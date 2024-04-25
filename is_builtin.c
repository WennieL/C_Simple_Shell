#include "shell.h"

/**
 * is_builtin - Check if a command is a built-in command
 * @command: The command to check
 *
 * Return: 1 if the command is a built-in, 0 otherwise
 */

int is_builtin(char *command)
{
	char *builtin_commands[] = 
	{
		"env",
		"exit"
	};

	int num_builtins = sizeof(builtin_command) / sizeof(char *);
	int i;

	while (i < num_builtins)
	{
		if (strcmp(command, builtin_command[i]) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
