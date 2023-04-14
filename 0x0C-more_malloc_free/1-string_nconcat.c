#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *result;
	unsigned int i;
	unsigned int j;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		len2 = n;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		result[i++] = s2[j++];
	}
	result[i] = '\0';
	return (result);
}


