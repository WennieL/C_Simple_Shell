#include <shell.h>

/**
 * read_line - read a line from stdin
 * 
 * Return: pointer points to the lint
 *
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t fread;

	fread = getline(&line, &bufsize, stdin);

	if (fread == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(line);
			perror("Error while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
