#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: param
 */
void print_all(const char * const format, ...)
{
	va_list a;
	char c;
	int i, num;
	float f;
	char *s;

	num = 0;
	va_start(a, format);
	while ((c = *(format++)))
	{
		if (num > 0)
			printf(", ");
		switch (c)
		{
			case 'c':
				i = va_arg(a, int);
				printf("%c", i);
				num++;
				break;
			case 'i':
				i = va_arg(a, int);
				printf("%d", i);
				num++;
				break;
			case 'f':
				f = va_arg(a, double);
				printf("%f", f);
				num++;
				break;
			case 's':
				s = va_arg(a, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				num++;
				break;
			default:
				break;
		}
	}
	printf("\n");
	va_end(a);
}
