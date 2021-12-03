#include "main.h"

void shell_error(int errorno, char *command)
{
	char *errptr;

	errptr = string_build(command, errorno);
        perror(errptr);
	free(errptr);
}
