#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @s: pointer to a string
 * Return: lengthof string
 */

int _strlen(char *s)
{
	int counter = 0;

	for (int i = 0; s[i] != '\n'; i++)
	{
		counter++;
	}

	return (counter);
}
