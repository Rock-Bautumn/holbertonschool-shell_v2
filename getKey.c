#include "main.h"

char *getKey(char *str)
{
	char *retVal;

	int i = 0;
	while (str[i] != '=' && str[i] != '\0' )
	{
		i++;
	}
	retVal = _strndup(str, i);
	return retVal;
}
