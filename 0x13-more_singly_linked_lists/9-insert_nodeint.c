#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: name of the list
 * @idx: index of the list
 * @n: integer
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	if (temp == NULL)
		return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = temp;
		temp = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
