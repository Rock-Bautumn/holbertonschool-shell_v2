#include "main.h"

/**
 * is_program - Determines what should be done using the input
 * @argv: - The argv to the child process
 * @originalinput: The first word sent as input
 * Return: void
 */

void is_program(char **argv, char *originalinput)
{

	char *path = argv[0];
	char *localpath = NULL;
	char *argpath = NULL;

	if (is_builtin(argv, originalinput) == 1)
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
		free(argpath);
		shell_error(not_found, path);
	}
}
