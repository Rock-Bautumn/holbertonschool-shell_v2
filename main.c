#include "main.h"

unsigned long int loopcount = 0;

int main(int ac, char **av)
{
	char **argv = NULL;
	char *input;


	(void) ac;
	(void) av;

	if (ac > 1)
		shell_error(cant_open, av[1]);

	do
	{
		prompt();
		input = get_input();
		argv = splitter(input, " ");
		is_program(argv, input);
		free(argv);
		free(input);
		fflush(NULL);
	} while (isatty(STDIN_FILENO) == 1);
	
	return (0);
}
