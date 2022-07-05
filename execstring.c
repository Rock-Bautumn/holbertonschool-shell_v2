#include "main.h"

void execstring(char *cmdstr)
{
	char **argv;
	argv = splitter(cmdstr, " ");
	is_program(argv, cmdstr);
	free(argv);
}
