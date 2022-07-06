#include "main.h"

/**
 * iterate_clist - Iterates through the items of a clist and
 * passes them to logic parsing
 * @clist: The list of commands to iterate through
 * Return: void
*/
void iterate_clist(char **clist)
{
	size_t i;

	for (i = 0; clist[i]; i++)
	{
		/* printf("clist [%lu]: %s\n", i, clist[i]); */
		logic_from_str(clist[i]);
	}
}
