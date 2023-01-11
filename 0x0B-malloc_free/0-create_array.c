#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of characters
 * @c: character
 *
 * Return: pointer to the array, NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(sizeof(c) * size);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
}
