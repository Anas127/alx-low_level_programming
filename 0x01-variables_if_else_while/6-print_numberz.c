#include <stdio.h>

/**
 * main - prints all single digits number of base 10
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

	}
	putchar('\n');
	return (0);
}
