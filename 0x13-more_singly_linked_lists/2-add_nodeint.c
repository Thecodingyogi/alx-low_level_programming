#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: name of list
 * @n: number of nodes
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
