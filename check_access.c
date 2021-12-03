#include "main.h"

void check_access(char *exepath, char **argv)
{
	char argbuf[PATH_MAX];

	if(exepath)
	{
		if (access(exepath, X_OK) == -1)
		{
			_strcpy(argbuf, argv[0]);
			shell_error(no_access, argbuf);
		}
		else
		{
			spawn_process(exepath, argv);
		}
	}
}
