#include "main.h"

/**
 * _strcmp - comapares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparison between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
