#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}

