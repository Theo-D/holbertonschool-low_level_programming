#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: pointer to the first element of list_t list.
 *
 * return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nextNode;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current->str);
		free(current);
		current = nextNode;
	}
}
