#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>

#define ALLOC_BYTES 32

/**
 * main - malloc and write ALLOC_BYTES worth of memory
 * Return: 0 if success
*/

int main(void)
{
	int *array;
	long unsigned int i, timer = 0;
	array = malloc(ALLOC_BYTES);
	assert(array != NULL);
	for (i = 0; i < ALLOC_BYTES / sizeof(int); i++)
	{
		array[i] = i;
	}
	while (timer < 120)
	{
		printf("Here after %ld seconds...\n", timer);
		sleep(1);
		timer++;
	}
	free(array);
	printf("Goodbye!\n");
	return 0;
}
