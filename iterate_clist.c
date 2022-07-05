#include "main.h"

void iterate_clist(char **clist)
{
	size_t i;
	printf("iterate list:\n");
	for (i = 0; clist[i]; i++)
	{
		printf("clist [%lu]: %s\n", i, clist[i]);
		logic_from_str(clist[i]);
	}
}
