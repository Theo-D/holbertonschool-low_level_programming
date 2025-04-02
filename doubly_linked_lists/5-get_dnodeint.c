#include "lists.h"
/**
 * get_dnodeint_at_index - Returns pointer to node at index.
 * @head: Pointer to first element of dlistint_t list.
 * @index: Index of node to be returned.
 *
 * Return: pointer to node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nodeN = head;

	if (head == NULL)
		return (NULL);

	nodeN = head;

	while (nodeN != NULL)
	{
		if (i == index)
			return (nodeN);
		nodeN = nodeN->next;
		i++;
	}

	return (nodeN);
}
