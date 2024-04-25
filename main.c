#include "shell.c"

/**
 * main - access point to function for shell
 *
 * Return: (0) if successful
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive();
	}
	else
	{
		non_interactive();
	}
	return (0);
}
