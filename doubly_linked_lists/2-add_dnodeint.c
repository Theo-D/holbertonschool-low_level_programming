#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 * @head: Pointer to list to which the node should be prepended.
 * @n: int parameter of object dlistint_t.
 *
 * Return: The adress of newly created node. If malloc fails,
 * returns NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (*head == NULL)
		newNode->next = NULL;
	else
	{
		temp = *head;
		temp->prev = newNode;
		newNode->next = *head;
	}
	*head = newNode;

	return (newNode);
}
