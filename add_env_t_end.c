#include "main.h"

env_t *add_env_t_end(env_t **head, char *envItem)
{
	env_t *this_node = *head;
	env_t *new_node = NULL;

	new_node = malloc(sizeof(env_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = getKey(envItem);
	new_node->value = getValue(envItem);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	this_node = *head;
	while (this_node->next != NULL)
	{
		this_node = this_node->next;
	}
	this_node->next = new_node;
	new_node->prev = this_node;

	return (*head);
}
