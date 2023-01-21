#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number os strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
