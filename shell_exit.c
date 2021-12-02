#include "main.h"

void shell_exit(char** argv, char *originalinput)
{
	fflush(NULL);
	free(originalinput);
	free(argv);
	exit(0);
}
