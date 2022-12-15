#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times character should be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; n++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
