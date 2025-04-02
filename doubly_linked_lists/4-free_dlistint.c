#include "lists.h"
/**
 * free_dlistint - Frees a dlist_int list.
 * @head: Pointer to the first element of dlistint_t list;
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

