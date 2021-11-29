#include "main.h"

char * get_input() {
	char *buff;
	size_t n = 1;
	ssize_t check;

	buff = malloc(sizeof(char) * 1);
	check = (getline(&buff, &n, stdin));

	if (check == -1)
	{
		printf("error\n");
		return(NULL);
	}

	return(buff);
}
