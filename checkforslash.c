#include "main.h"

int checkforslash(char *command)
{
	int i = 0;

	while(command[i] != '\0')
	{
		if (command[i] == '/')
			return (1);
		i++;
	}
	return (0);
}
