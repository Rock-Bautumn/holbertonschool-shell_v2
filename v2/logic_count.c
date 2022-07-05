#include "main.h"
#include <assert.h>

size_t logic_count(char *argv)
{
	size_t i = 0, count = 1;
	char c, d, m = 0;

	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i+1];
		if ((c == '|' && d == '|') || (c == '&' && d == '&'))
			if (argv[i+2] != '\0')
			{
				count++;
				i++;
				m = 1;
			}
	}
	if (m == 0)
		return (1);
	return (count);
}

logic_t **fill_llist(char *argv)
{
	logic_t **holder, *temp;
	size_t length = logic_count(argv), start = 0;
	size_t i = 0, hi = 0, last_type = 1;
	char c, d;

	holder = malloc(sizeof(logic_t*) * (length + 1));
	assert(holder);

	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i+1];
		if ((c == '|' && d == '|') || (c == '&' && d == '&'))
		{
			temp = malloc(sizeof(logic_t));
			temp->type = last_type;
			if (c == '|')
				last_type = 2;
			else
				last_type = 1;
			temp->statement = strndup(&argv[start], i - start);
			holder[hi] = temp;
			assert(holder[hi]);
			hi++;
			i++;
			start = i+1;
		}
	}
	if (hi < length)
	{
		temp = malloc(sizeof(logic_t));
		temp->statement = strdup(&argv[start]);
		temp->type = last_type;
		holder[hi] = temp;
		hi++;
	}
	holder[hi] = NULL;
	return (holder);
}

void iterate_llist(logic_t **clist)
{
	size_t i;
	int xs;
	char ct, ot;

	printf("print_llist:\n");
	for (i = 0; clist[i]; i++)
	{
		printf("type: %c ", clist[i]->type + '0');
		printf("statement: %s\n", clist[i]->statement);
		printf("first char: %c\n", clist[i]->statement[0]);
		xs = exit_status;
		ct = clist[i]->type;
		if ((xs == 0 && ct == 1) || (xs != 0 && ct == 2))
		{
			ot = clist[i]->statement[0];
			if (ot >= '0' && ot <= '9')
			{
				printf("FALSE\n");
				exit_status = 1;
			}
			else
			{
				printf("true\n");
				exit_status = 0;
			}
			/* delete up to ot = clist when implementing the actual functionality */
			/* pipes_from_str(clist[i]->statement); */
		}
	}
}
/*
void print_list(char **list)
{
	size_t i;
	printf("print_list:\n");
	for (i = 0; list[i]; i++)
	{
		printf("%s\n", list[i]);
	}
}
*/
void logic_from_str(char *input)
{
	logic_t **llist;

	printf("found %lu logic units in %s\n", logic_count(input), input);
	llist = fill_llist(input);
	iterate_llist(llist);
	free_llist(llist);
}
/*
int exit_status = 0;

int main()
{
	char *input;

	input = get_input();
	logic_from_str(input);
	free(input);
	return (0);
}
*/
