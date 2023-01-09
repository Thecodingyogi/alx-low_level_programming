#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 *
 * Return: pointer to the beginning of the located substring
 * or null if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				break;
			}
			return (&haystack[i]);
		}
	}
	return (0);
}
