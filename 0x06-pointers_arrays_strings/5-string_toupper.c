#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: string
 *
 * Return: upercase string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] -= 'a' - 'A';
		i++;
	}
	return (x);
}

