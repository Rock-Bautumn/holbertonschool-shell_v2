#include "main.h"

/**
 * execstring - Executes the string as a basic command line command
 * @cmdstr: The string to execute
 * Return: void
*/

void execstring(char *cmdstr)
{
	/* WE CAN SPLIT PLIST ITEM DATA HERE BUT WE CANNOT FREE CMDSTR */
	char **argv;

	argv = splitter(cmdstr, " ");
	parse_crumb(oneaddr, argv);
	is_program(argv);
}
