#include "main.h"
#include <assert.h>

/**
 * clists_from_str - Parse and process all command lists in a string
 * @input: The string consisting of command lists
 * Return: void
*/

void clists_from_str(char *input)
{
	char **clist;

	clist = ndsplitter(input, ";");
	iterate_clist(clist);
	free_list(clist);

}
