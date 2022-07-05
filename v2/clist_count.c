#include "main.h"
#include <assert.h>

/*

size_t clist_count(char *argv)
{
	size_t i = 0, count = 1;
	char c, d, m = 0;

	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i+1];
		if (c == ';' && (d == ' '))
		{
			count++;
			m = 1;
		}
	}
	if (m == 0)
		return (1);
	return (count);
}

char **fill_clist(char *argv)
{
	char **holder;
	size_t length = clist_count(argv), start = 0;
	size_t i = 0, hi = 0, count = 0;
	char c, d, e;

	holder = malloc(sizeof(char *) * (length + 1));
	assert(holder);
	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i+1];
		e = argv[i+2];
		if (c == ' ' && d == ';' && (e == ' ' || e == '\0'))
		{
			holder[hi] = strndup(&argv[start], i - start);
			printf("filled in %s\n", holder[i]);
			count++;
			hi++;
			if (e == '\0')
				start = i+2;
			else
				start = i+3;
		}
	}
	if (hi < length)
	{
		holder[hi] = strdup(&argv[start]);
		hi++;
	}
	holder[hi] = NULL;
	return (holder);
}
*/

void iterate_clist(char **clist)
{
	size_t i;
	printf("iterate list:\n");
	for (i = 0; clist[i]; i++)
	{
		printf("clist [%lu]: %s\n", i, clist[i]);
		logic_from_str(clist[i]);
	}
}

void print_list(char **list)
{
	size_t i;
	printf("print_list:\n");
	for (i = 0; list[i]; i++)
	{
		printf("%s\n", list[i]);
	}
}

void clists_from_str(char *input)
{
	char **clist;

	clist = ndsplitter(input, ";");
	iterate_clist(clist);
	free_list(clist);

}

int exit_status = 0;

int main()
{
	char *input;

	input = get_input();
	clists_from_str(input);
	return (exit_status);
}
