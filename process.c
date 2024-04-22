#include <shell.h>

int process(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("Error in process: Child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("Error in process: forking");
	}
	else
	{
		do
		{
			waitpid(pid, &status, WUNTRACED);
		}
		while (!WIFEXITED(status) && !WIFSIGNAL(status));
	}
	return (-1);
}
