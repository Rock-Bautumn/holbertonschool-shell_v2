#include "main.h"

size_t print_envlist(const env_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("key = %s\n", h->key);
		printf("value = %s\n\n", h->value);
	}
	return (i);
}
