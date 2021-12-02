#include "main.h"

void shell_env()
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
