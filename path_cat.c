#include "main.h"

/**
 * path_cat - Concatenates two paths together, adds / between if not found
 * @desty: The left side of the concatenation
 * @src: The right side of the concatenation
 * Return: The string produced
 */

char *path_cat(char *desty, char *src)
{
	int goback = 0;
	int limit = 0;
	char *retval;

	char dest[PATH_MAX];


	while (*(desty + limit) != '\0')
	{
		dest[limit] = *(desty + limit);
		limit++;
		goback++;
	}
	if (*(desty + limit - 1) != '/')
	{
		dest[goback] = '/';
		goback++;
	}
	limit = 0;
	while (src[limit] != '\0')
	{
		dest[goback] = *(src + limit);
		limit++;
		goback++;
	}
	dest[goback] = '\0';
	retval = _strdup(dest);
	return (retval);
}
