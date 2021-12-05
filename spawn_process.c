#include "main.h"

/**
 * spawn_process - Forks a child process that is possessed by our argv
 * @pathandprogram: The filepath of the executable to possess our child
 * @argv: the argv given to the new process
 * Return: void
 */

void spawn_process(char *pathandprogram, char **argv)
{
	extern int exit_status;
	extern char **environ;
	pid_t id;
	int status;

	id = fork();
	if (id == -1)
		perror("Fork failed");
	else if (id > 0)
		wait(&status);
	else if (id == 0)
		execve(pathandprogram, argv, environ);
	if ((WIFEXITED(status)))
		exit_status = WEXITSTATUS(status);
	if (id != 0)
	{
		fflush(stdout);
		fflush(stdin);
	}
}
