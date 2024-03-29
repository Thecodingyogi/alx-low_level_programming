#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
