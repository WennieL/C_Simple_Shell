#include <shell.h>
#define TOK_DELIM " \t\r\n\a="

/**
 * split_line - split a string into multiple strings
 * @line: string to be splited
 *
 * Return: pointer points to the new array
 */


char **split_line(char *line)
{
	int bufsize = 64;
	int position = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (!tokens)
	{
		frpintf(stderr, "Allocation error in split_line: tokens\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += 64;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens)
			{
				fprintf(stderr, "Allocation error in split_line: tokens\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}

