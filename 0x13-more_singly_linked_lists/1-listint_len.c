#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: name of list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
