#include "shell.h"

/**
 * read_line - read a line from stdin
 *
 * Return: pointer points to the head of the line
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			/* Free memory if end of file reached */
			free(line);
			exit (EXIT_SUCCESS);
		}
		else
		{
			/* Free memory in case of error */
			free(line);
			perror("Error while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
		
	}
	return (line);
}
