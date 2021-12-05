#include "main.h"

/**
 * shell_error - Prints an error message using errorno
 * @errorno: The enum of the error message, see main.h
 * @command: The command that had an error
 * Return: void
 */

void shell_error(int errorno, char *command)
{
	char *errptr;

	errptr = string_build(command, errorno);
	_errorputs(errptr);
	free(errptr);
}
