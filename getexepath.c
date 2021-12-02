#include "main.h"

char *argtocom(char *arg)
{
	char **possiblepaths = splitter(_getenv("PATH"), ":");
	int i = 0;
	struct stat st;


	while (possiblepaths[i] != NULL)
	{
		if (stat(path_cat(possiblepaths[i], arg), &st) == 0)
		{
			return (path_cat(possiblepaths[i], arg));
		}
		i++;
	}

	return (NULL);
}
