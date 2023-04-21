#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	if (n > 0)
		printf("%d", va_arg(a, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(a, int));
	}
	printf("\n");
	va_end(a);
}
