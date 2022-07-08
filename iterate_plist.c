#include "main.h"


/**
 * iterate_plist - Iterates through the items of a plist and
 * passes them to logic parsing
 * @plist: The list of commands to iterate through
 * Return: void
*/
void iterate_plist(char **plist)
{
	size_t i;
	char itoahold[12];

	for (i = 0; plist[i]; i++);
	if (i == 1)
		execstring(plist[0]);
	else if (i == 2)
	{
		/* printf("plist [%lu]: %s\n", i, plist[i]); */
		onepiper(plist[0], plist[1]);
	}
	else
	{
		if (loopcount == 0)
			_strcpy(itoahold, "0");
		else
			_strcpy(itoahold, _itoa(loopcount, itoahold));
		_errorputs("hls: ");
		_errorputs(itoahold);
		_errorputs(": Syntax Error: Too many pipes!\n");
	}
}
