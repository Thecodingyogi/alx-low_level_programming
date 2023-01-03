#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
		return (0);
}
