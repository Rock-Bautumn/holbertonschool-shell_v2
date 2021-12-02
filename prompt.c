#include "main.h"

void prompt()
{
	extern unsigned long int loopcount;
	
	loopcount++;
	_puts("$ ");
}
