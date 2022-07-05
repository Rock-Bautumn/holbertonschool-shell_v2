#include "main.h"

/**
 * nottymode - This is the shell mode we run in when there is no tty
 * Return: void
 */

void nottymode(void)
{
	char *input;

	while ((input = get_input()))
	{
		prompt();
		parseandexec(input);
		free(input);
		fflush(NULL);
	}
}
