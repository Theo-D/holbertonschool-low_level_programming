#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the first element of dlistint_t list.
 * @idx: Position at which inserting the new node.
 * @n: Integer data from dlistint_s struct.
 *
 * Return: Pointer to newly created node. Otherwise if insertion or malloc
 * fails, return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int pos = 0;

	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*h == NULL)
	{
		*h = newNode;
		return (newNode);
	}

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp)
	{
		if (pos == idx)
			break;

		temp = temp->next;
		pos++;
	}

	if (temp == NULL && pos == idx)
		return (add_dnodeint_end(h, n));
	else if (temp == NULL)
		return (NULL);
	newNode->prev = temp->prev;
	newNode->next = temp;

	temp->prev = newNode;
	temp = newNode->prev;
	temp->next = newNode;

	return (newNode);
}
