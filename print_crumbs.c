#include "main.h"

/**
 * print_crumbs - Print the contents of the parse crumbs
 * Return: void
*/

void print_crumbs(void)
{
	parse_crumb_t *this_node = crumbList;

	while (this_node->next != NULL)
	{
		/*
		* printf("The crumb %p has free_addr, ", (void *) this_node);
		* printf("%p, and type ", this_node->free_addr);
		* printf("%d\n", this_node->operation);
		*/
		this_node = this_node->next;
	}

}
