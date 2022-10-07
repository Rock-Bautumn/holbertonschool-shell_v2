#include "main.h"

/**
 * _strncpy - copies string from src to dest, adding up to n chars from
 * the source to the dest
 * @dest: the destination string
 * @src: the string part we are adding to dest
 * @n: the number of chars we want to copy from src
 * Return: the new dest string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
