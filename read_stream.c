#include "shell.h"

/**
 * read_stream - read a line from the stream
 *
 * Return: pointer to the head of the stream 
 */

char *read_stream(void)
{
	char *line = malloc(sizeof(char) * bufsize);
	int bufsize = 1024;
	int i = 0;
	int word;

	if (line == NULL)
	{
		fprintf(stderr, "Allocation error in read_stream");
		exit(EXIT_FAILURE);
	}

	while (line)
	{
		word = getchar();
		if (word == EOF)
		{
			free(line);
			exit(EXIT_SUCESS);
		}
		else if (word == '\n')
		{
			line[i] = '\0';
			return (line);
		}
		else
		{
			line[i] = word;
		}
		i++;

		if (i >= bufsize)
		{
			bufsize += bufsize;
			line = realloc(line, bufsize);
			if (line == NULL)
			{
				fprintf(stderr, "Reallocation error in read_stream");
				exit(EXIT_FAILURE);
			}
		}
	}
}
