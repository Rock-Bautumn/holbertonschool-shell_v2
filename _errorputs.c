#include "main.h"

/**
 * _errorputs - Writes a string to stderr
 * @str: The string to write to stderr
 * Return: void
 */

void _errorputs(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_errorputchar(str[i]);
	}
}
