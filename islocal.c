#include <stdlib.h>

char * islocal(char *string)
{
	if (string[0] == '.' && string[1] == '/' && string[2] != NULL)
	{
		return ((string + 2));
	}

	return (NULL);
}
