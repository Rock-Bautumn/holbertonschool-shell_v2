#include "main.h"
/**
 * iterate_pipes - create all of the pipes and spawn the processes
 * @plist: The list of statements between pipes
 * Return: 0 if success
*/
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
/**
 * print_list - print a list of strings
 * @list: The list of strings
 * Return: 0 if success
*/
void print_list(char **list)
{
	size_t i;
	printf("print_list:\n");
	for (i = 0; list[i]; i++)
	{
		printf("%s\n", list[i]);
	}
}

/**
 * pipes_from_str - Parse and pipe the processes in the line
 * @input: The list of statements with pipes
 * Return: 0 if success
*/

void pipes_from_str(char *input)
{
	char **plist;

	plist = ndsplitter(input, "|");
	iterate_pipes(plist);
	free_list(plist);

}
/**
 * main - test the functionality of the pipes_from_str func
 * Return: 0 if success
*/
int main()
{
	char *input;

	input = get_input();
	pipes_from_str(input);
	return (0);
}
