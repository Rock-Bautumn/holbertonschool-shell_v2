#include "main.h"

void prompt(void)
{
	extern unsigned long int loopcount;

	if(isatty(STDIN_FILENO) == 1)
	{
		_puts("$ ");
	}
	loopcount++;
}
