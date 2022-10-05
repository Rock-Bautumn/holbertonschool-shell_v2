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
	printf("starting parse_crumb\n");
	fflush(NULL);
	parse_crumb(opflist, clist);
	printf("ndsplitter for clist is %p\n", (void *) clist);
	iterate_clist(clist);
	free_list(clist);
	printf("freeing clist address %p\n", (void *) clist);

}
