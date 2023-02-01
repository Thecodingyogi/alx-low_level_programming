#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: name of list
 *
 * Return: sum of all data, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
