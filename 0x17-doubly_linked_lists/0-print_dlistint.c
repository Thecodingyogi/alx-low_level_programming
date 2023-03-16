#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of a list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h->next != NULL)
		nodes++;

	return (nodes);
}
