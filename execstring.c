#include "main.h"

/**
 * execstring - Executes the string as a basic command line command
 * @cmdstr: The string to execute
 * Return: void
*/

void execstring(char *cmdstr)
{
	/* WE CAN SPLIT PLIST ITEM DATA HERE BUT WE CANNOT FREE IT */
	char **argv;

	argv = splitter(cmdstr, " ");
	is_program(argv);
	free(argv);
}
