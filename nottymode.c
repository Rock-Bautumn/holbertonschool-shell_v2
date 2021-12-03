#include "main.h"

void nottymode()
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
