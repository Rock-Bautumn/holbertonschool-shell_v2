#include "main.h"

/**
 * shell_exit - Exits the shell
 * @argv: the new argv built for the child process
 * @originalinput: what was originally sent
 * Return: void
 */

void shell_exit(void)
{
	printf("shell exit?\n");
	fflush(NULL);
	/* free(argv); */
	printf("freeing the crumbs\n");
		fflush(NULL);
	print_crumbs();
	free_parse_crumbs();
	/* freeEnvList(&envList); */
	printf("Goodbye from shell_exit()!\n");
	fflush(NULL);
	exit(exit_status);
}
