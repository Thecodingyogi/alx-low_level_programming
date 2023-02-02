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
	listint_t *new = *head;
	listint_t *temp;

	for (i = 0; i < idx; i++)
	{
		new = new->next;
	}
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	temp->next = new->next;
	new->next = temp;

	return (new);
}
