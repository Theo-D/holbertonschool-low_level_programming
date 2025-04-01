#include "lists.h"
/**
 * dlistint_len - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the first node of the list_t list.
 *
 * Return: Count of nodes from the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	if (h->prev == NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			nodeCount++;
		}
		return (nodeCount);
	}
	else if (h->next == NULL)
	{
		while (h != NULL)
		{
			h = h->prev;
			nodeCount++;
		}
		return (nodeCount);
	}
	else
		return (0);
}
