#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string
 *
 * Return: interger value of string
 */

int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	size = (_strlen(s1) + _strlen(s2) + 1);

	ptr = (char *) malloc((sizeof(char) * size) - 1);

	if (ptr == 0)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		ptr[i] = s[i];
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		ptr[j] = s[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
