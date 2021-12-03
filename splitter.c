#include "main.h"

char **splitter(char *fun, char *delimiter)
{
	char **holder;
	int i = 0;
	long int length = space_count(fun, delimiter);
	char *temp;

/*strtok must take an array of chars not a pointer*/
	holder = malloc(sizeof(char *) * (length + 1));
/*strtok has to be split to the same var so create temp*/
	temp = strtok(fun, delimiter);
	holder[i] = temp;
	while (temp != NULL)
	{
		i++;
		temp = strtok(NULL, delimiter);
		holder[i] = temp;
	}
	return (holder);
}
