#include "main.h"
unsigned long int loopcount;

/**
 * _itoa - converts natural number to ascii string
 * @value: the number to convert
 * @newString: where we are saving the new string
 * Return: the ascii string
 */

char *_itoa(unsigned long int value, char *newString)
{
	int i = 0;
	unsigned long int n = value;
	unsigned long int r;

	newString[11] =  '\0';

	while (n)
	{
		r = n % 10;
		newString[11 - i - 1] = r + 48;
		n = n / 10;
		i++;
	}

	return (newString + 11 - i);
}
/**
 * _strcat - concatenate two strings together
 * @desty: our left part to concatenate
 * @src: the right part of the concatenation
 * Return: the concatenated string
 */

char *_strcat(char *desty, char *src)
{
	int goback = 0;
	int i = 0;
	char *retval;

	char dest[PATH_MAX];

	while (*(desty + i) != '\0')
	{
		dest[i] = *(desty + i);
		i++;
		goback++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[goback] = *(src + i);
		i++;
		goback++;
	}
	dest[goback] = '\0';

	retval = strdup(dest);
	return (retval);
}

/**
 * string_build - Generates error text
 * @command: The command that failed
 * @errorno: The error number of the failure
 * Return: The created string
 */

char *string_build(char *command, int errorno)
{
	char this_shell[] = "hsh: \0";
	char itoahold[12];
	char catholder[PATH_MAX];
	char *colon = ": ";
	char *errptr;

	if (loopcount == 0)
		_strcpy(itoahold, "0");
	else
		_strcpy(itoahold, _itoa(loopcount, itoahold));

	if (errorno == no_access)
	{
		_strcpyfree(itoahold, _strcat(itoahold, colon));
		_strcpyfree(catholder, _strcat(this_shell, itoahold));
		_strcpyfree(catholder, _strcat(catholder, command));
		_strcpyfree(catholder, _strcat(catholder, ": Permission denied\n"));
	}
	if (errorno == not_found)
	{
		_strcpyfree(itoahold, _strcat(itoahold, colon));
		_strcpyfree(catholder, _strcat(this_shell, itoahold));
		_strcpyfree(catholder, _strcat(catholder, command));
		_strcpyfree(catholder, _strcat(catholder, ": not found\n"));
	}
	else if (errorno == cant_open)
	{
		_strcpyfree(catholder, _strcat(this_shell, itoahold));
		_strcpyfree(catholder, _strcat(catholder, colon));
		_strcpyfree(catholder, _strcat(catholder, "Can't open\n"));
		_strcpyfree(catholder, _strcat(catholder, command));
	}
	errptr = strdup(catholder);
	return (errptr);
}
