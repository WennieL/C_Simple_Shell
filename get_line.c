#include "shell.h"

/**
 * _getline - reads a line of input from stdin
 *
 * Return: a pointer to the allocated buffer containing the input line
 *         or NULL if an error occurs or if end of file is reached
 */

char *get_line(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t chars_read;

	if (isatty(STDIN_FILENO))
	{
		printf("$ ");
	}

	chars_read = getline(&buffer, &bufsize, stdin);
	if (chars_read == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			exit(EXIT_FAILURE);
		}
		free(buffer);
		return (NULL);
	}

	return (buffer);
}
