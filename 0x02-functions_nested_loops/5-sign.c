#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: character that prints
 *
 * Return: 1 if n is greater than 0
 * 0 if n is zero
 * -1 if n is less than 0
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
