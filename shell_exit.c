#include "main.h"

/**
 * shell_exit - Exits the shell
 * @argv: the new argv built for the child process
 * @originalinput: what was originally sent
 * Return: void
 */

void shell_exit(char **argv, char *originalinput)
{

	fflush(NULL);
	free(originalinput);
	free(argv);
	exit(exit_status);
}
