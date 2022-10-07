#include "main.h"

/**
 * getKey - Duplicates the text before the first '=' found
 * @str: The string containing key=value form
 * Return: void
*/

char *getKey(char *str)
{
	char *retVal;
	int i = 0;

	while (str[i] != '=' && str[i] != '\0')
	{
		i++;
	}
	retVal = _strndup(str, i);
	return (retVal);
}
