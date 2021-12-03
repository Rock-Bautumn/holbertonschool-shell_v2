#include "main.h"

char *islocal(char *string)
{
	struct stat st;
	char *bufptr = malloc(sizeof(char) * PATH_MAX);
	char *homestr = NULL;

	if (checkforslash(string) == 0)
	{
		free(bufptr);
		return (NULL);
	}
	homestr = expand_home(string);
	strcpy(bufptr, homestr);
	free(homestr);

	if (stat(bufptr, &st) == 0)
	{
		return (bufptr);
	}
	free(bufptr);
	return (NULL);
}
