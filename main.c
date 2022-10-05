#include "main.h"


unsigned long int loopcount = 0;
int exit_status = 0;
env_t *envList;
parse_crumb_t *crumbList = NULL;

/**
 * main - The entry point of our program; determines if we need to start in
 *        ttymode (interactive mode) or nottymode (non-interactive mode)
 * @ac: The number of arguments passed to our shell
 * @av: The arguments passed to our shell
 * Return: The exit status
 */

int main(int ac, char **av, char **env)
{
	if (ac > 1)
		shell_error(cant_open, av[1]);
	(void) env;
	/* shell_init(env); */
	/* interactive mode */
	if (isatty(STDIN_FILENO) == 1)
		ttymode();
	/* non-interactive mode */
	else
		nottymode();

	return (0);
}
