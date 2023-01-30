#include "lists.h"

/**
 * _strlen - prints length of a string
 * @s: string
 *
 * Return: length of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to linked list
 * @str: string
 *
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
		temp->next = new;
	}
	return (new);
}
