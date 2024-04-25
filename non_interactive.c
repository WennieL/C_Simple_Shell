#include "shell.h"

/**
 * non_interactive:
 *
 *
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
