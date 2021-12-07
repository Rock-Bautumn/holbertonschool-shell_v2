#include "main.h"

/**
 * prompt - increases loopcount and prints the prompt
 * Return: void
 */

void prompt(void)
{

	if (isatty(STDIN_FILENO) == 1)
	{
		_puts("$ ");
	}
	loopcount++;
}
