#include <shell.h>

char **split_line(char *line)
{
	int bufsize = 64;
	int position = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (!token)
	{
		frpintf(stderr, "Allocation error\n");
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
			if (!token)
			{
				fprintf(stderr, "Allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}
