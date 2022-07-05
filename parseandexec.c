#include "main.h"

/**
 * parseandexec - Parse the given string and execute it
 * @input: A string that is the input line given to the shell
 * Return: void
 */

void parseandexec(char *input)
{
	char **argv;
	argv = splitter(input, " ");
	is_program(argv, input);
	free(argv);
}
