#include "main.h"

int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char **argv = NULL;

	if (ac > 1)
		shell_error(cant_open, av[1]);

	while (1)
	{
		prompt();
		argv = splitter(get_input(), " ");
		is_program(argv);
		free(argv);
	}
}
