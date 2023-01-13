#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, NULL if malloc fails
 * NULL if min > max
 */

int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	n = (max - min + 1);
	ptr = malloc(sizeof(int) * n);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
