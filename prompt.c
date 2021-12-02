#include "main.h"

void prompt(void)
{
	extern unsigned long int loopcount;
	
	loopcount++;
	_puts("$ ");
}
