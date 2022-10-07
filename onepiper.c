#include "main.h"
/**
 * onepiper - basic pipe functionality
 * @cmd1: the first command
 * @cmd2: the second command
 * Return: void
*/
void onepiper(char *cmd1, char *cmd2)
{
	int fd[2], pid1, pid2;

	if (pipe(fd) == -1)
		goto oopsie;
	pid1 = fork();
	if (pid1 < 0)
		goto oopsie;
	if (pid1 == 0)
	{
		dup2(fd[1], STDOUT_FILENO);
		close(fd[0]);
		close(fd[1]);
		execstring(cmd1);
	}
	pid2 = fork();
	if (pid2 < 0)
		goto oopsie;
	if (pid2 == 0)
	{
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		close(fd[1]);
		execstring(cmd2);
	}
	close(fd[0]);
	close(fd[1]);
	goto end;
oopsie:
	_errorputs("An error occurred");
end:;
}
