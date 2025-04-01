#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the first node of the list_t list.
 *
 * Return: Cound of nodes from the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	if (h->prev == NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			nodeCount++;
		}
		return (nodeCount);
	}
	else if (h->next == NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->prev;
			nodeCount++;
		}
		return (nodeCount);
	}
	else
		return (0);
}
