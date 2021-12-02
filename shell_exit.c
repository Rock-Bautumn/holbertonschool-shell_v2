#include "main.h"

void shell_exit(char** argv)
{
	free(argv);
	exit(0);
}
