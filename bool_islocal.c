#include "main.h"

/**
 * bool_islocal - Checks if a file exists in the filesystem
 * @string: The filename
 * Return: 1 if the file exists in the filesystem, 0 if not
 */

int bool_islocal(char *string)
{
	struct stat st;
	char bufptr[PATH_MAX];
	char *homestr = NULL;

	if (checkforslash(string) == 0)
	{
		return (0);
	}
	homestr = expand_home(string);
	_strcpy(bufptr, homestr);
	free(homestr);

	if (stat(bufptr, &st) == 0)
	{
		return (1);
	}
	return (0);
}
