#include "main.h"

/**
 * argtocom - Searches for a matching executable file inside of the
 *            directories found inside the PATH environment variable
 * @arg: The name of the file/command
 * Return: The matching full path of the command
 */

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
	free_list(possiblepaths);
	return (NULL);
}
