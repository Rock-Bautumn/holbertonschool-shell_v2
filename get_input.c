#include "main.h"

/**
 * get_input - Receives input and makes it safe to process
 * Return: Parsed input from the user
 */

char *get_input(void)
{
	char *buff;
	size_t n = 1;
	ssize_t check;
	char newline[] = {'\n', '\0'};

	buff = malloc(sizeof(char) * 1);

	check = (getline(&buff, &n, stdin));
	if (check == -1)
	{
		free(buff);
		exit(0);
	}
	if (buff[0] == '\n' && buff[1] == '\0')
		;
	else
	{
		buff = strtok(buff, newline);
		if ((onlyspaces(buff)))
		{
			buff[0] = '\n';
			buff[1] = '\0';
		}
	}
	parse_crumb(oneaddr, buff);
	return (buff);
}
