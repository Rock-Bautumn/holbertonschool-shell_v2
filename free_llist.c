#include "main.h"

/**
 * free_llist - Frees all of the statement items of ** llist and frees the list
 * @llist: The llist to free
 * Return: void
 */


void free_llist(logic_t **llist)
{
	int i = 0;

	while (llist[i] != NULL)
	{
		i++;
	}
	while (i)
	{
		i--;
		free(llist[i]->statement);
		free(llist[i]);
	}
	free(llist);
}
