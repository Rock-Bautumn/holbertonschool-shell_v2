#include "main.h"

/**
 * is_builtin - Checks to see if a function is actually a shell function
 * @argv: - The argv created for the child process
 * @originalinput: The first word of what the user typed/sent
 * Return: 1 if it is a shell function, 0 if not
 */

int is_builtin(char **argv, char *originalinput)
{
	if (strcmp(argv[0], "exit") == 0)
	{
		shell_exit(argv, originalinput);
		return (1);
	}
	if (strcmp(argv[0], "env") == 0)
	{
		shell_env();
		return (1);
	}
	return (0);
}
