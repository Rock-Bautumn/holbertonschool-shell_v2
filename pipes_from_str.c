#include "main.h"

/**
 * pipes_from_str - Parse and process all pipes in a string
 * @input: The string consisting of pipe lists
 * Return: void
*/

void pipes_from_str(char *input)
{
	char **plist;

	plist = ndsplitter(input, "|");
	parse_crumb(opflist, plist);
	printf("plist is at %p\n", (void *) plist);
	iterate_plist(plist);
	/* free_list(plist);
	printf("freeing plist at %p\n", (void *) plist); */
	
}
