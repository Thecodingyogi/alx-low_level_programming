#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - checks if a string is a number
 * @str: string
 *
 * Return: TRUE if number is present
 */

int isNumeric(const char *str)
{
	while (str != '\0')
	{
		if (str < '0' || str > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (isNumeric(argv[i] == 0))
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
