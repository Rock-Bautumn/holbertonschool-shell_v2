#include "main.h"
/**
 * _atoi- converts a string to an integer
 * @s: input variable pointer
 * Return: sign * val
 */
int _atoi(char *s)
{
	int val = 0;
	int neg = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			break;
		}
		if (*s == '-')
		{
			neg++;
		}
		s++;
	}
	if (neg % 2 != 0)
	{
		sign = -1;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			val = val * 10 + ((*s - '0') * sign);
		}
		else if (*s < '0' || *s > '9')
		{
			break;
		}
		s++;
	}
	return (val);
}
