#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	hash_table_t *hash_table;

	hash_table = hash_table_create(1024);
	printf("%p\n", (void *)hash_table);
	return (EXIT_SUCCESS);
}
