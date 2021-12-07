#include "main.h"

/**
 * checkforslash - Checks a string to see if a forward slash is contained
 * @command: The string to check for a slash
 * Return: 1 if there is a slash, 0 if no slash
 */

int checkforslash(char *command)
{
	int i = 0;

	while (command[i] != '\0')
	{
		if (command[i] == '/')
			return (1);
		i++;
	}
	return (0);
}
