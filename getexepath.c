#include "main.h"

char *argtocom(char *arg)
{
	char **possiblepaths = ndsplitter(_getenv("PATH"), ":");
	int i = 0;
	struct stat st;
	char *thispath;

	while (possiblepaths[i] != NULL)
	{
		thispath = path_cat(possiblepaths[i], arg);

		if (stat(thispath, &st) == 0)
		{
			free_list(possiblepaths);
			return (thispath);
		}
		free(thispath);
		i++;
	}

	return (NULL);
}
