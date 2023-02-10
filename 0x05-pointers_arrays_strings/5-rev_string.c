#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, len, half, temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	half = len / 2;

	for (i = 0; i < half; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

