#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t list.
 * @head: Pointer to first element of dlistint_t list.
 *
 * Return: Sum of data n from all elements of dlistint_t list.
 */
int sum_dlistint(dlistint_t *head)
{
	int nodeSum = 0;
	dlistint_t *nodeN = head;

	if (head == NULL)
		return (0);

	nodeN = head;

	while (nodeN != NULL)
	{
		nodeSum += nodeN->n;
		nodeN = nodeN->next;
	}
	return (nodeSum);
}
