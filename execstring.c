#include "main.h"

/**
 * execstring - Executes the string as a basic command line command
 * @cmdstr: The string to execute
 * Return: void
*/

void execstring(char *cmdstr)
{
	char **argv;

	argv = splitter(cmdstr, " ");
	is_program(argv, cmdstr);
	free(argv);
}
