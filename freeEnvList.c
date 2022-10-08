#include "main.h"

/**
 * freeEnvList - Free the virtual environment
 * Return: void
*/

void freeEnvList(void)
{
	env_t *thisNode = envList;
	env_t *nextNode;

	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
		free(thisNode->key);
		free(thisNode->value);
		free(thisNode);
		thisNode = nextNode;
	}
}
