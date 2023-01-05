#include "main.h"

/**
 * _pow_recursion - prints value of x raised to the power of x
 * @x: first number
 * @y: second number
 *
 * Return: value of x, -1 is y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (x);
}
