#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at given position.
 * @head: Pointer to first element of dlistint_t list.
 * @index: Position at which deleting the node.
 *
 * Return: Return 1 if deletion is successful, otherwise return -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;
	dlistint_t *temp;

	if (head == NULL)
		return (-1);

	current = *head;
	while (current)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	temp = current;

	if (index == 0 && current->next == NULL)
		*head = NULL;
	else if (index == 0)
	{
		*head = temp->next;
		current = temp->next;
		current->prev = NULL;
	}
	else if (current->next == NULL)
	{
		current = current->prev;
		current->next = NULL;
	}
	else
	{
		current = temp->prev;
		current->next = temp->next;
		current = temp->next;
		current->prev = temp->prev;
	}

	free(temp);
	return (1);
}
