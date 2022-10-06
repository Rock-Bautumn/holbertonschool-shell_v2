#include "main.h"

void free_parse_crumbs(void)
{
	parse_crumb_t *this_node = crumbList;
	parse_crumb_t *free_node = NULL;

	while (this_node != NULL)
	{

		printf("free parse crumbs - this node\n");
		printf("the op is %d and the free addr is %p\n", this_node->operation, this_node->free_addr);
		printf("next node is %p\n", (void *) this_node->next);

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
}
