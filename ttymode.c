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
		/* free(input); */
		free_parse_crumbs();
		/* parse_crumb_reset(); */
		fflush(NULL);
	}
}
