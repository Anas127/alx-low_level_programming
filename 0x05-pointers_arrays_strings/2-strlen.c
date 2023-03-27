#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @s: pointer to a string
 * Return: lengthof string
 */

int _strlen(char *s)
{
	int counter;

	while (*s != '\0')
		counter++;

	return (counter);
}
