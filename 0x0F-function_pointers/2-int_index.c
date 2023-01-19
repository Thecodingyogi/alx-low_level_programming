#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in an array
 * @array: array of integers
 * @cmp: pointer to the function
 *
 * Return: index of the first element, -1 if no element matches
 * and size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
