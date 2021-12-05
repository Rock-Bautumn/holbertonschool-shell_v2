#include "main.h"

/**
 * splitter - A destructive command that makes an array of string pointers
 *          by using strtok to append a nullbyte where delimiter is found
 * @fun: the string we are breaking up
 * @delimiter: the string we are breaking up fun with
 * Return: A double pointer which is a list of strings split up
 */

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
