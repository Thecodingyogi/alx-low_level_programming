#include "main.h"

/**
 * _sqrt_recursion - prints natural square root of number
 * @n: number
 *
 * Return: natural square root of number, else return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n));
}
