#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The list from which the elements are counted then returned.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	unsigned long int listLen = 0;

	while (h != NULL)
	{
		h = h->next;
		listLen++;
	}

	return (listLen);
}
