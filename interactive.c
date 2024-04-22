#include <shell.h>

void ineractive(void)
{
	char *line;
	char **args;
	int status = -1;

	do
	{
		printf("$ ");
		line = read_line;
		args = split_line(line);
		status = exec_args(args);

		free(line);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	}
	while (status == -1);
}
