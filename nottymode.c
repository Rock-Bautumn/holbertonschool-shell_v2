#include "main.h"

/**
 * nottymode - This is the shell mode we run in when there is no tty
 * Return: void
 */

void nottymode(void)
{
	char *input;
	char **argv;

	while ((input = get_input()))
	{
		prompt();
		argv = splitter(input, " ");
		is_program(argv, input);
		free(argv);
		free(input);
		fflush(NULL);
	}
}
