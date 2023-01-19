#include "calc.h"
#include <stdio.h>

/**
 * op_add - sum of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
