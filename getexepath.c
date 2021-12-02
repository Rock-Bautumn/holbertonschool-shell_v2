#include "main.h"

char *argtocom(char *arg)
{
	char **possiblepaths = ndsplitter(_getenv("PATH"), ":");
	int i = 0;
	struct stat st;
	char *pathptr;

	while (possiblepaths[i] != NULL)
	{
		if (stat(path_cat(possiblepaths[i], arg), &st) == 0)
		{
			pathptr = strdup(path_cat(possiblepaths[i], arg));
			free(possiblepaths);
			return (pathptr);
		}
		i++;
	}

	return (NULL);
}
