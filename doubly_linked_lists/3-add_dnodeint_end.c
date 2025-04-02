#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of a dlistint_t list.
 * @head: Pointer to the first element of the dlistint_t list.
 *
 * Return: A pointer to the created node or NULL if malloc fails. 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *newNode = malloc(sizeof(dlistint_t));;

	if (temp == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
