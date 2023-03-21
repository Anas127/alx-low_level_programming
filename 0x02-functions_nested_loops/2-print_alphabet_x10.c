#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	char l;
	int i;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (i = 0; i <= 9; i++)
			_putchar(l);
		_putchar('\n');
	}
}
