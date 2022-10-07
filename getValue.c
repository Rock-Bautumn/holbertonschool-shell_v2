#include "main.h"

char *getValue(char *str)
{
	char *retVal;

	int i = 0;
	while (str[i] != '=' && str[i] != '\0' )
	{
		i++;
	}
	retVal = _strdup(&str[i+1]);
	return retVal;
}
