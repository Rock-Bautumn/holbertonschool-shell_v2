#include "main.h"

char *islocal(char *string)
{
	struct stat st;
	char buffer[PATH_MAX];
	char *bufptr;

	if (checkforslash(string) == 0)
		return (NULL);
	strcpy(buffer, expand_home(string));

	if (stat(buffer, &st) == 0)
	{
		bufptr = buffer;
		return (bufptr);
	}

	return (NULL);
}
