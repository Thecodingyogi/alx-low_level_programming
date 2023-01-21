#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, result;
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			result = 0;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			result = 0;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			result = 0;
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
			result = 0;
			break;
		default:
			result = 1;
			break;
		}
		if (format[i + 1] != '\0' && result == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
