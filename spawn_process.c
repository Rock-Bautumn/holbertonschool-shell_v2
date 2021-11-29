#include "main.h"

void spawn_process(char *pathandprogram, char **argv)
{

	int id;
	int status;

	id = fork();

	if (id != 0)
		wait(&status);
	if (id == 0)
		execve(pathandprogram, argv, NULL);
	if (id != 0)
	{
		fflush(stdout);
		fflush(stdin);
	}
}
