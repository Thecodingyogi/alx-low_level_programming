#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: pointer to newly allocated space, NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int n1 = 0, n2 = 0, i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[n1] != '\0')
	{
		n1++;
	}
	while (s2[n2] != '\0')
	{
		n2++;
	}

	if (n > s2)
		n = s2;
	ptr = malloc(sizeof(char) * (s1 + n + 1));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
	{
		ptr[i] = s1[n1];
	}
	for (; i < (n1 + n); i++)
	{
		ptr[i] = s2[i - n1];
	}
	return (ptr);
}
