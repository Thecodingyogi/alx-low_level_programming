#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal, less than 0 if s1 is less than s2
 * value more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	val = s1[i] - s2[i];
	return (val);
}
