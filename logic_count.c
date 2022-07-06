#include "main.h"

/**
 * logic_count - Returns the number of logical units found
 * between logical operators
 * @argv: The string containing the commands betweent the logical operators
 * Return: The number of logical units
*/

size_t logic_count(char *argv)
{
	size_t i = 0, count = 1;
	char c, d, m = 0;

	for (; argv[i] != '\0'; i++)
	{
		c = argv[i];
		d = argv[i + 1];
		if ((c == '|' && d == '|') || (c == '&' && d == '&'))
			if (argv[i + 2] != '\0')
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
