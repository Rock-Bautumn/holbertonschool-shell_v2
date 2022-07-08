#include "main.h"
/**
 * onepiper - basic pipe functionality
 * @cmd1: the first command
 * @cmd1: the second command
 * Return: void
*/
void onepiper(char *cmd1, char *cmd2)
{
	int fd[2], pid1, pid2;

	(void) cmd1;
	(void) cmd2;

	if (pipe(fd) == -1)
		goto oopsie;
	pid1 = fork();
	if (pid1 < 0)
		goto oopsie;
	if (pid1 == 0)
	{
		/* Child process 1 (ping) */
		dup2(fd[1], STDOUT_FILENO);
		close(fd[0]);
		close(fd[1]);
		/* execlp("ping", "ping", "-c", "5", "google.com", NULL); */
		execstring(cmd1);

	}
	pid2 = fork();
	if (pid2 < 0)
		goto oopsie;
	if (pid2 == 0)
	{
		/* Child process 2 (grep) */
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		close(fd[1]);
		/* execlp("grep", "grep", "rtt", NULL); */
		execstring(cmd2);
	}
	close(fd[0]);
	close(fd[1]);
	/*
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	*/
	goto end;
	oopsie:
	_errorputs("An error occurred");
	end:;
}
