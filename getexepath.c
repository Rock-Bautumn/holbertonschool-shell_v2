#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

char *argtocom(char *arg)
{
	char **possiblepaths = splitter(_getenv("PATH"), ":");
	int i = 0;
	struct stat st;

	printf("%s\n", arg);
	printf("%s\n", possiblepaths[i]);
	while (possiblepaths[i] != NULL)
	{
		printf("%s\n", path_cat(possiblepaths[i], arg));
		if (stat(path_cat(possiblepaths[i], arg), &st) == 0)
		{
			printf("We found the path!");
			return (path_cat(possiblepaths[i], arg));
		}
		i++;
	}

	return ("ERROR");
}
