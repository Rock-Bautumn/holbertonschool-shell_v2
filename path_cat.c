#include "main.h"

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
	retval = strdup(dest);
	return (retval);
}
