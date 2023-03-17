#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
