#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: number to be printed
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int n;

	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
	}
	else
		while (n > 98)
			printf("%d, ", n--);
			printf("%d\n", n);
}
