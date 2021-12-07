#include "main.h"

/**
 * check_access - Checks if there is execute access to a file
 * @exepath: The path to our executable
 * @argv: The argv for the new process
 * Return: void
 */

void check_access(char *exepath, char **argv)
{
	char argbuf[PATH_MAX];

	if (exepath)
	{
		if (access(exepath, X_OK) == -1)
		{
			_strcpy(argbuf, argv[0]);
			/*exit status given from sh*/
			exit_status = 126;
			shell_error(no_access, argbuf);
		}
		else
		{
			spawn_process(exepath, argv);
		}
	}
}
