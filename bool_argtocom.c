#include "main.h"

/**
 * bool_argtocom - Searches for a matching executable file inside of the
 *            directories found inside the PATH environment variable
 * @arg: The name of the file/command
 * Return: 1 if matching the command to the path, otherwise 0
 */

int bool_argtocom(char *arg)
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
			free(thispath);
			free_list(possiblepaths);
			return (1);
		}
		free(thispath);
		i++;
	}
	free_list(possiblepaths);
	return (0);
}
