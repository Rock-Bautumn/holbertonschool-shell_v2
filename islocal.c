#include "main.h"

char *islocal(char *string)
{
	struct stat st;

	if (stat(&string, &st, NULL) == 0)
	{
		return (string);
	}
	return (NULL);
}

int main()
{
	char* string = "./a.out";
