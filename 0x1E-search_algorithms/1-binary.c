#include "search_algos.h"

/**
 * binary_search - Searches for a vlue in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: If value is not present in array or if array is NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		else if (value < array[i])
		{
			high = i - 1;
		}
		else
			low = i + 1;
	}
	return (-1);
}

