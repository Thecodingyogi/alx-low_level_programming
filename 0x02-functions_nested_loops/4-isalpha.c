#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be printed
 *
 * Return: 1 if c is a lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	char c = 'a';
	char x = 'A';

	if ((c <= 'z') || (x <= 'Z'))
		return (1);
	else
		return (0);
}