#include "main.h"
/**
 * _strcpyfree - copies a string
 *
 * @src: string to be copied and freed
 * @dest: string to be copied
 *
 * Return: char *
 **/

char *_strcpyfree(char *dest, char *src)
{
	int a = 0;
	int counter = 0;
	int b;
	char rts[PATH_MAX] = "";

	while (counter <= a)
	{
		if (src[a] != '\0')
		{
			rts[a] = src[a];
			a++;
		}
		else if (src[a] == '\0')
		{
			rts[a] = src[a];
			b = a;
			counter = a + 1;
		}
	}
	a = 0;

	while (a <= b)
	{
		dest[a] = rts[a];
		a++;
	}
	free(src);
	return (dest);
}

/**
 * _strcpy - copies a string
 *
 * @src: string to be copied
 * @dest: string to be copied
 *
 * Return: char *
 **/

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int counter = 0;
	int b;
	char rts[PATH_MAX];

	while (counter <= a)
	{
		if (src[a] != '\0')
		{
			rts[a] = src[a];
			a++;
		}
		else if (src[a] == '\0')
		{
			rts[a] = src[a];
			b = a;
			counter = a + 1;
		}
	}
	a = 0;

	while (a <= b)
	{
		dest[a] = rts[a];
		a++;
	}
	return (dest);
}
