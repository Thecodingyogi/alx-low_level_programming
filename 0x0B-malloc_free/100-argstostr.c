#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
}
