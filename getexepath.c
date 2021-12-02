#include "main.h"

char *argtocom(char *arg)
{
	char **possiblepaths = ndsplitter(_getenv("PATH"), ":");
	int i = 0;
	struct stat st;
	char *pathptr;

	printf("argtocom is using %s\n", arg);

	while (possiblepaths[i] != NULL)
	{
		printf("possiblepaths of %d = %s\n", i, possiblepaths[i]);
		printf("pathcat makes %s\n", path_cat(possiblepaths[i], arg));
		printf("stat gives us %d\n", stat(path_cat(possiblepaths[i], arg), &st));
		if (stat(path_cat(possiblepaths[i], arg), &st) == 0)
		{
			pathptr = path_cat(possiblepaths[i], arg);
			printf("pathptr = %s\n", pathptr);
			return (pathptr);
		}
		i++;
	}

	return (NULL);
}
