#include "main.h"

unsigned long int loopcount = 0;

int main(int ac, char **av)
{


	(void) ac;
	(void) av;

	if (ac > 1)
		shell_error(cant_open, av[1]);

/* interactive mode */
	if (isatty(STDIN_FILENO) == 1)
	{
		ttymode();
	}
	/* non-interactive mode */
	else
	{
		nottymode();
	}

	return (0);
}
