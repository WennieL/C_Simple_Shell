#include "shell.h"

/**
 * interactive: 
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
