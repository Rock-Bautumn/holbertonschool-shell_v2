#include "main.h"

/**
 * is_builtin - Checks to see if a function is actually a shell function
 * @argv: - The argv created for the child process
 * Return: 1 if it is a shell function, 0 if not
 */

int is_builtin(char **argv)
{
	if (_strcmp(argv[0], "exit") == 0)
	{
		shell_exit(argv);
		return (1);
	}
	if (_strcmp(argv[0], "env") == 0)
	{
		shell_env();
		return (1);
	}
	return (0);
}
