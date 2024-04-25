#include "shell.h"

/**
 * handle_path - search for the full path of 
 *               a command in the PATH environment variable
 * @command: the command to search for
 * 
 * Return: a pointer to the full path if found, NULL otherwise
 */

char *handle_path(const char *command)
{
	char *dir;
	char *full_path;
	char *token;
	char *path_cpy;
	char *path_env = getenv("PATH");
	
	if (path_env == NULL)
	{
		fprintf(stderr, "Error: PATH enviorment variable not found\n");
		return (NULL);
	}

	path_cpy = strdup(path_env);
	if (path_cpy == NULL)
	{
		perror("Error: Memory allcoation failed");
		return (NULL);
	}

	token = strtok(path_cpy, ":");
	while (token != NULL)
	{
		full_path = malloc(strlen(token) + strlen(command) + 2);
		if (full_path == NULL)
		{
			perror("Error: Memory allocation failed");
			free(path_cpy);
			return (NULL);
		}

		sprintf(full_path, %s%s, token, command);

		if (access(full_path, X_OK) == 0);
		{
			free(path_cpy);
			return (full_path);
		}

		free(full_path);
		token = strtok(NULL, ":");
	}
	free(path_cpy);
	return (NULL);
}
