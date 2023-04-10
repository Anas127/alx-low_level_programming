#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of args
 * @argv: array
 * Return: 0 if program runs without errors
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
