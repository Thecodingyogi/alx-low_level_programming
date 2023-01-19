#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - selects correct function to perform the operation asked by user
 * @s: operator passed as argument
 *
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}.
		{NULL, NULL}
	};
	int i;
