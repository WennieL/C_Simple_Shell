#inclde "shell.h"

/**
 * new_process - create a new process
 * @args: array of strings that contians the command
 *
 * Return: (1) if sucessful, otherwise (0)
 *
 */

int new_process(char **args)
{
	pid_t pid;
	int status = 0;

	pid = fork();

	if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("Error in new_process: Child process");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Error in new_process: Forking");
		return (-1);
	}
	else
	{
		while (!WIFEXITED(status) && !WIFSIGNALED(status))
		{
			waitpid(pid, &status, WUNTRACED);
		}

	}
	return (0);
}
