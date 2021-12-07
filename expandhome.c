#include "main.h"

/**
 * expand_home - Checks for a tilde/~ and expands the path if found
 * @string: The path to check
 * Return: The expanded path
 */

char *expand_home(char *string)
{
	int i = 0;
	char *buffer = malloc(sizeof(char) * PATH_MAX);
	int offset = 0;


	if (string[0] == '~')
	{
		strcpy(buffer, _getenv("HOME"));
		while (buffer[offset])
			offset++;
		i++;
		offset--;
	}

	while (string[i])
	{
		buffer[(i + offset)] = string[i];
		i++;
	}
	buffer[i + offset] = '\0';
	return (buffer);
}
