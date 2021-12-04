#include "main.h"

void _errorputs(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_errorputchar(str[i]);
	}
}
