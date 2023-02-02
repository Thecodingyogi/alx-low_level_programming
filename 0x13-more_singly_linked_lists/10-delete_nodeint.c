#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *p;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	p = temp->next;
	temp->next = p->next;
	p->next = NULL;
	free(p);
	return (1);
}
