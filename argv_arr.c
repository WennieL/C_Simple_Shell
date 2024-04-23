#include <shell.h>

#define TOK_DELMA " \t\n\r"

/**
 * argv_arr - splits the input string into an array of arguments
 * @input: input string containing the arguments
 *
 * Return: double pointer to the beginning of the first string
 *         or NULL if there is an error
 */

char **argv_arr(char *input)
{
	char *token;
	char **array;
	int count = 0;
	int i = 0;

	while (*input)
	{
		while (*input && strchr(TOK_DELMA, *input))
			input++;
		if (*input)
		{
			count++;

			while (*input && !strchr(TOK_DELMA, *input))
				input++;
		}
	}

	array = malloc((count + 1) * size(char *));
	if(array == NULL)
	{
		return (NULL);
	}

	token = strtok(input, TOK_DELMA);
	while (token != NULL)
	{
		array[i] = strdup(token);
		if (array[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		i++;
		token = strtok(NULL, TOK_DELMA);
	}
	array[i] = NULL;

	return (array);
}
