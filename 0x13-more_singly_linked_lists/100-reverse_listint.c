#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: head pointer
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *p = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = temp;
	}

	*head = p;
	return (*head);
}

