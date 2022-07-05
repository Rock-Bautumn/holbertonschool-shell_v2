#include "main.h"

void iterate_pipes(char **plist)
{
	size_t i;
	printf("iterate list:\n");
	for (i = 0; plist[i]; i++)
	{
		printf("%s\n", plist[i]);
		/* logic_from_str(plist[i]); */
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

void pipes_from_str(char *input)
{
	char **plist;

	plist = ndsplitter(input, "|");
	iterate_pipes(plist);
	free_list(plist);

}

int main()
{
	char *input;

	input = get_input();
	pipes_from_str(input);
	return (0);
}
