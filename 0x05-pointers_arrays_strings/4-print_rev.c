#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: strings
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
