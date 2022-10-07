#include "main.h"

/**
 * parse_crumb - Add a node to the parse crumb list so it can be freed later
 * @operation: The enum for the type of free operation must
 *             done on that address
 * @address: The address to be freed later
 * Return: void
*/

parse_crumb_t parse_crumb(int operation, void *address)
{
	parse_crumb_t *this_node;
	parse_crumb_t *new_node = NULL;

	new_node = malloc(sizeof(parse_crumb_t));
	if (new_node == NULL)
		return (*new_node);

	new_node->free_addr = address;
	new_node->next = NULL;
	new_node->operation = operation;

	if (crumbList == NULL)
	{
		crumbList = new_node;
		return (*new_node);
	}
	this_node = crumbList;
	while (this_node != NULL && this_node->next != NULL)
	{
		this_node = this_node->next;
	}
	this_node->next = new_node;

	return (*new_node);
}
