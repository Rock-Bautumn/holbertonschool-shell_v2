#include "main.h"

/**
 * free_parse_crumbs - Frees all of the data stored in crumbList
 * Return: void
*/
void free_parse_crumbs(void)
{
	parse_crumb_t *this_node = crumbList;
	parse_crumb_t *free_node = NULL;

	while (this_node != NULL)
	{
		free_node = this_node;
		if (free_node->operation == opflist)
			free_list(free_node->free_addr);
		else if (free_node->operation == opllist)
			free_llist(free_node->free_addr);
		else if (free_node->operation == oneaddr)
			free(free_node->free_addr);
		this_node = this_node->next;
		free(free_node);

	}
	crumbList = NULL;
}
