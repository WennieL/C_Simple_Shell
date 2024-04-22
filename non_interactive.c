#include <shell.h>

void non_interactive(void)
{
	char *word;
	char **args;
	int status = -1;

	do
	{
		word = read_stream();
		args = split_line(line);
		status = exec_args(args);

		free(word);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	}
	while (status == -1);
}
