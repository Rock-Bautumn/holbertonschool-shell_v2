#include "main.h"

/**
 * getValue - Duplicates the text after the first '=' found
 * @str: The string containing key=value form
 * Return: void
*/

char *getValue(char *str)
{
	char *retVal;
	int i = 0;

	while (str[i] != '=' && str[i] != '\0')
	{
		i++;
	}
	retVal = _strdup(&str[i + 1]);
	return (retVal);
}
