#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: List from which the elements are printed.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
