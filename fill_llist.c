#include "main.h"


/**
 * fill_llist - Create a list of logic_t structs
 * @argv: The string to be split into logical units
 * Return: The address of the new list
*/

logic_t **fill_llist(char *argv)
{
	logic_t **holder, *temp;
	size_t length = logic_count(argv), start = 0;
	size_t i = 0, hi = 0, last_type = 1;
	char c, d;

	holder = malloc(sizeof(logic_t *) * (length + 1));
	assert(holder);

	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i + 1];
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
			start = i + 1;
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
