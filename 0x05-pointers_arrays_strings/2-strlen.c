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
	
<<<<<<< HEAD
	for (counter =  0; *s  != '\0'; s++)
		counter++;
=======
	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
>>>>>>> 54411d27a2776a726cd668f00e7eebcef785e44f

	return (counter);
	
}
