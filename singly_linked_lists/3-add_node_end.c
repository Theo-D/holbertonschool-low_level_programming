#include "lists.h"
/**
 * add_node_end - Adds a node at the end of list_t.
 * @head: The first element of the list_t.
 * @str: The string to be copied to ne new node.
 *
 * Return: The node newly created. Returns NULL if malloc fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *newNode;
	unsigned int _strLen = 0;
	int i = 0;

	if (temp == NULL)
		return (NULL);

	while (str[i])
	{
		_strLen++;
		i++;
	}

	temp->len = _strLen;
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	newNode = *head;

	while (newNode->next != NULL)
		newNode = newNode->next;

	newNode->next = temp;

	return (temp);
}
