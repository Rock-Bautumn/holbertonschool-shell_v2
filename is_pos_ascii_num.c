#include "main.h"

/**
 * is_pos_ascii_num - Is the string a positive ascii number
 * @str: The sting
 * Return: 1 for yes, 0 for no
*/

int is_pos_ascii_num(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (i < len)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("%c is invalid\n", str[i]);
			return (0);
		}
		i++;
	}
	return (1);
}
