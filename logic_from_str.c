#include "main.h"

/**
 * logic_from_str - Parses the logic of a string and iterates through it
 * @input: The string to parse
 * Return: void
*/
void logic_from_str(char *input)
{
	logic_t **llist;

	llist = fill_llist(input);
	/* printf("llist address is %p\n", (void *) llist); */
	parse_crumb(opllist, llist);
	iterate_llist(llist);
}
