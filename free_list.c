#include "main.h"

/**
 * free_list - Frees all of the items of a ** list and frees the list
 * @list: The list to free
 * Return: void
 */


void free_list(char **list)
{
	int i = 0;

	while (list[i] != NULL)
	{
		i++;
	}
	while (i)
	{
		i--;
		free(list[i]);
	}

	free(list);
}
