#include "main.h"

/**
 * shell_env - Prints out the environment variables, like printenv or env.
 * Return: void
*/

void shell_env(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		_puts("\n");
		i++;
	}
}
