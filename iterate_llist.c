#include "main.h"

/**
 * iterate_llist - Iterate through the list of commands and decide which to do
 * @clist: The list of statements between logical operators
 * Return: void
*/
void iterate_llist(logic_t **clist)
{
	size_t i;
	int xs, XS = EXIT_SUCCESS;
	char ct;


	for (i = 0; clist[i]; i++)
	{
		xs = exit_status;
		ct = clist[i]->type;

		if ((xs == XS && ct == 1) || (xs != XS && ct == 2) || (i == 0))
		{
			execstring(clist[i]->statement);
			/* pipes_from_str(clist[i]->statement); */
		}
	}
}
