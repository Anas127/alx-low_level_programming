#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arguments
 * @argv: array
 * Return: 0 if program runs without errors
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
