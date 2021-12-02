#include "main.h"

char *expand_home(char *string)
{
	int i = 0;
	char buffer[PATH_MAX];
	int offset = 0;
	char *bufptr;

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
	bufptr = buffer;
	return (bufptr);
}
