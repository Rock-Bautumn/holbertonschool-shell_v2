#include "main.h"

void print_crumbs(void)
{
	parse_crumb_t *this_node = crumbList;

	while (this_node->next != NULL)
	{
		printf("The crumb %p has free_addr %p and type %d\n", (void *) this_node, this_node->free_addr, this_node->operation);
		this_node = this_node->next;
	}

}
