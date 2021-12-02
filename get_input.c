#include "main.h"

char * get_input() {
	char *buff;
	size_t n = 1;
	ssize_t check;
	char newline[] = {'\n', '\0'};

		buff = malloc(sizeof(char) * 1);
		check = (getline(&buff, &n, stdin));

		buff = strtok(buff, newline);
		if (check == -1)
		{
			free(buff);
			exit(0);
		}

	return(buff);
}
