#include "main.h"

/**
 * ttymode - runs in ttymode (terminal)
 * Return: void
 */

void ttymode(void)
{
	char *input = NULL;

	while (1)
	{
		prompt();
		input = get_input();
		parseandexec(input);
		free_parse_crumbs();
		fflush(NULL);
	}
}
