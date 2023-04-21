#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: param
 * @n: param
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *string;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(a, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
