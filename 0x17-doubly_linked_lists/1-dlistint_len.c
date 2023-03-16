#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: head of list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
