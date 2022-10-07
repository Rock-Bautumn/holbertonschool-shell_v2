#include "main.h"

/**
 * shell_exit - Exits the shell
 * @argv: the new argv built for the child process
 * @originalinput: what was originally sent
 * Return: void
 */

void shell_exit(void)
{
	fflush(NULL);
	/* print_crumbs(); */
	free_parse_crumbs();
	/* freeEnvList(&envList); */
	fflush(NULL);
	exit(exit_status);
}
