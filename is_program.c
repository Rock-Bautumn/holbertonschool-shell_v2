#include "main.h"

/**
 * is_program - Determines what should be done using the input
 * @argv: - The argv to the child process
 * Return: void
 */

void is_program(char **argv)
{

	char *path = argv[0];
	char *localpath = NULL;
	char *argpath = NULL;

	if (is_builtin(argv) == 1)
		;
	else if (path[0] == '\n' && path[1] == '\0')
		;
	else if (bool_islocal(path) == 1)
	{
		localpath = islocal(path);
		check_access(localpath, argv);
		free(localpath);
	}
	else if (bool_argtocom(path) == 1)
	{
		argpath = argtocom(path);
		check_access(argpath, argv);
		free(argpath);
	}
	else
	{
		exit_status = 127;
		shell_error(not_found, path);
	}
}
