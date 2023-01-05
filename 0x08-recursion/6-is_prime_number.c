#include "main.h"

/**
 * helperfunction - Prints 0 or 1
 * @num: Number
 * @i: second number
 *
 * Return: 1 if number is prime number, otherwise 0
 */

int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helperfunction(num, i + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - returns 1 if input is a prime number
 * @n: number
 *
 * Return: 1 if integer is prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperfunction(n, 2));
}

