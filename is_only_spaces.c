#include "main.h"

int onlyspaces(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
			return (0);
		i++;
	}
	return (1);
}
