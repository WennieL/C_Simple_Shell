#include <shell.h>

#define TOK_DELAM " \t\n\r\a="

/**
 * argv_arr - splits the input string into an array of arguments
 * @input: input string containing the arguments
 *
 * Return: double pointer to the beginning of the first string
 *         or NULL if there is an error
 */

char **argv_arr(char *input)
{
	char *input_cpy;
	char *token;
	char **array;
	int count = 0;
	int i = 0;

	input_cpy = strdup(input);
	if (!input_cpy)
	{
		fprintf(stderr, "Allocation error\n");
		return (NULL);
	}

	token = strtok(input_cpy, TOK_DELAM);
	while (token != NULL)
	{
		count++;
		toekn = stroke(NULL, TOK_DELAM);
	}

	array = malloc((count + 1) * size(char *));
	if(!array)
	{
		fprintf(stderr, "Allocation error\n");
		free(input_cpy)l
		return (NULL);
	}

	token = strtok(input_cpy, TOK_DELAM);
	while (token != NULL)
	{
		array[i] = strdup(token);
		if (!array[i])
		{
			fprintf(stderr, "Allocation error\n");
			for (int j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			free(input_cpy);
			return (NULL);
		}
		i++;
		token = strtok(NULL, TOK_DELAM);
	}
	array[i] = NULL;
	
	free(input_cpy);
	return (array);
}
