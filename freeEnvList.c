#include "main.h"

void freeEnvList(env_t **head)
{
	env_t *thisNode = *head;
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
