#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *_getenv(char *str)
{
	extern char **environ;
	int i = 0;
	char *thisenv;
	char *copyenv;
	char *retval;

	while (environ[i])
	{
		copyenv = strdup(environ[i]);
		thisenv = strtok(environ[i], "=");

		if (strcmp(thisenv, str) == 0)
		{
			retval = strdup(strtok(copyenv, "="));
			retval = strtok(NULL, "=");
			return (retval);
		}
		i++;
	}
	printf("ERROR:\ni = %d - copyenv = %s", i, copyenv);
	return ("ERROR");
}
