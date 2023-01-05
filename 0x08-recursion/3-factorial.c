#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: number
 *
 * Return: -1 to indicate error, the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
