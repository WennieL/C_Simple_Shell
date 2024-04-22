#include <shell.h>

char *read_stream(void)
{
	int bufsize = 1024;
	int i = 0;
	char *stream = malloc (sizeof(char) * bufsize);
	char word;

	if (stream == NULL)
	{
		fprintf(stderr, "Allocation error in read_stream");
		exit(EXIT_FAILURE);
	}

	while (stream)
	{
		word = getchar();
		if (word == EOF)
		{
			free(stream);
			exit(EXIT_SUCCESS);
		}
		else if (word == '\n')
		{
			stream[i] = '0';
			return (stream);
		}
		else
		{
			stream[i] = word;
		}
		i++;

		if (i >= bufsize)
		{
			bufsize += bufsize;
			stream = realloc(word, bufsize);
			if (stream == NULL)
			{
				fprintf(stderr, "Reallocation error in read_stream");
				exit(EXIT_FAILURE);
			}
		}
	}
}
