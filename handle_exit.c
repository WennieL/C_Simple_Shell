#include <shell.h>

void handle_exit(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		printf("Exiting shell...\n");
		exit(EXIT_SUCCESS);
	}
}
