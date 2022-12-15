#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9')
	{
		if (!(x == '2' || x== '4'))
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
