#include "main.h"

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
