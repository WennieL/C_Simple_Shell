#include <shell.h>

char **split_line(char *line)
{
	int bufsize = 1024;
	int i = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (!token)
	{
		frpintf(stderr, "Allocation error in split_line: tokens\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		if (token[0] == '#')
		{
			break;
		}
		tokens[i] = token;
		i++;
		
		if (i >= bufsize)
		{
			bufsize += bufsize;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "Reallocation error in split_line: tokens");
				exit(EXIT_FAILURE);
			}
		}
                token = strtok(NULL, TOK_DELIM);
	}
        tokens[i] = NULL;
        return (tokens);
}
