#include "main.h"

int space_count(char *str, char *delimiter)
{
	int i = 0;
	int count = 1;
	int gotspace = 1;
	char delim = delimiter[0];

	if (str[i] == '\0' || str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] == delim)
		{
			if (gotspace == 0)
			{
				count++;
				gotspace = 1;
			}
		}
		else
			gotspace = 0;
		i++;
	}
	return (count);
}

int main()
{

	printf("space count = %d\n", space_count("             ", " "));
	return (0);
	
}
