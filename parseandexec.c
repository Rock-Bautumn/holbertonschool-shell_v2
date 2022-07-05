#include "main.h"

/**
 * parseandexec - Parse the given string and execute it
 * @cmdstr: A string that is the input line given to the shell
 * Return: void
 */

void parseandexec(char *cmdstr)
{
	char **argv;
	argv = splitter(cmdstr, " ");
	is_program(argv, cmdstr);
	free(argv);
}
