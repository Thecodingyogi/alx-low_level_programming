#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to print
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	char c = 'a';

	if (c <= 'z')
		return (1);
	else
		return (0);
}
