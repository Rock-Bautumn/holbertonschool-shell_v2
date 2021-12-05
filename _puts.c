#include "main.h"

/**
 * _puts - Prints a string to standard output, does not print trailing bytes
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
