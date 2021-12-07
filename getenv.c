#include "main.h"

/**
 * _getenv - Get the environment value from environment
 * @str: The variable/key from the environment to retrieve the value of
 * Return: The value of the environment variable
 */

char *_getenv(char *str)
{
	int i = 0;
	int j = 0;
	char *retval;
	char copyenv[PATH_MAX];

	while (environ[i])
	{
		j = 0;
		strcpy(copyenv, environ[i]);
		while (copyenv[j] != '\0' && copyenv[j] != '=')
		{
			j++;
		}
		copyenv[j] = '\0';
		j++;
		if (strcmp(copyenv, str) == 0)
		{
			retval = &environ[i][j];
			return (retval);
		}
		i++;
	}
	return (NULL);
}
