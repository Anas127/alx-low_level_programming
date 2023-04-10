#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arguments
 * @argv: array
 * Return: 0 if program runs without errors
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
