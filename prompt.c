#include "main.h"

/**
 * prompt - increases loopcount and prints the prompt
 * Return: void
 */

void prompt(void)
{
	extern unsigned long int loopcount;

	if (isatty(STDIN_FILENO) == 1)
	{
		_puts("$ ");
	}
	loopcount++;
}
