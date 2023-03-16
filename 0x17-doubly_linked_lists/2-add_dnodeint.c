#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of list
 * @n: data of the list
 *
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->prev = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;
		*head->prev = temp;
		*head = temp;
	}
	return (*head);
}
