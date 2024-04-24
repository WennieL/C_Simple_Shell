#include <shell.h>
#include <string.h>

#define TOK_DELAM " \t\n\r\a="

/**
 * argv_arr - splits the input string into an array of arguments
 * @input: input string containing the arguments
 *
 * Return: double pointer to the beginning of the first string
 *         or NULL if there is an error
 */

char **argv_arr(char *line)
{
	char *token;
	char **tokens;
	int count = 0;
	int i = 0;
	
	token = strtok(line, TOK_DELAM);
	while (token != NULL)
	{
		count++;
		token = stroke(NULL, TOK_DELAM);
	}
	
	tokens = malloc((count + 1) * size(char *));
	if(!tokens)
	{
		fprintf(stderr, "Allocation error\n");
		return (NULL);
	}
	
	token = strtok(line, TOK_DELAM);
	while (token != NULL)
	{
		tokens[i] = strdup(token);
		if (!tokens[i])
		{
			fprintf(stderr, "Allocation error\n");
			for (int j = 0; j < i; j++)
			{
				free(tokens[j]);
			}
			free(tokens);
			return (NULL);
		}
		i++;
		token = strtok(NULL, TOK_DELAM);
	}
	tokens[i] = NULL;
	
	return (tokens);
}
