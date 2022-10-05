#include "main.h"

void parse_crumb_reset(void)
{
	parse_crumb_t *this_node = crumbList;
	parse_crumb_t *free_node = NULL;

	while (this_node != NULL)
	{

		printf("reset parse crumbs - this node\n");
		printf("the op is %d and the free addr is %p\n", this_node->operation, this_node->free_addr);
		printf("next node is %p\n", (void *) this_node->next);

		free_node = this_node;
		this_node = this_node->next;
		free(free_node);
	}
}
