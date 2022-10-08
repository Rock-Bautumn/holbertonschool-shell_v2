#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string we are counting the characters of
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	length = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}
