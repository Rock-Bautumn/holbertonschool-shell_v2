#include "main.h"

/**
 * ttymode - runs in ttymode (terminal)
 * Return: void
 */

void ttymode(void)
{
	char **argv = NULL;
	char *input = NULL;

	while (1)
	{
		prompt();
		input = get_input();
		argv = splitter(input, " ");
		is_program(argv, input);
		free(argv);
		free(input);
		fflush(NULL);
	}
}
