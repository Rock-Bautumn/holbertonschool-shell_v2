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
	iterate_llist(llist);
	free_llist(llist);
}
