#include "main.h"

/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: digit to be printed
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
