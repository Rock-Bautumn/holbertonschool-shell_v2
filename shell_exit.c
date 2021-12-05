#include "main.h"

void shell_exit(char** argv, char *originalinput)
{
	extern int exit_status;

	fflush(NULL);
	free(originalinput);
	free(argv);
	exit(exit_status);
}
