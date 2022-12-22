#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	char lower_case[] = {'a', 'e', 'o', 't', 'l'};
	char upper_case[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower_case[j] || s[i] == upper_case[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}

