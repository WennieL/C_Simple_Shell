#include <shell.h>

/**
 * envior: prints current enviorment variables
 *
 * Return: void
 */

void enviro(void)
{
	int i = 0;
	
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
