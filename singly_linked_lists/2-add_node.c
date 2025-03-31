#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Pointer to list to which the node should be prepended.
 * @str: Str to be copied into string of new node.
 *
 * Return: The adress of newly created node. If malloc fails,
 * returns NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int strLen = 0;
	int i = 0;

	if (newNode == NULL)
		return (NULL);

	while (str[i] != 0)
	{
		strLen++;
		i++;
	}
	newNode->len = strLen;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	/*
	 * printf("Adress of next node from %s: %p\n", newNode->str,
	 * (void *)newNode->next);
	 * printf("Current Adress: %p of %s\n",(void *)head, newNode->str);
	 */

	return (newNode);
	free(newNode);
}
