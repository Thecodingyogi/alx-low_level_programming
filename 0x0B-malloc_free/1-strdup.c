#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string, otherwise NULL.
 */

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == 0)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = (char *) malloc((sizeof(char) * size) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
