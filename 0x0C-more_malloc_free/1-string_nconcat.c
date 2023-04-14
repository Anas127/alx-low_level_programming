#include "main."

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: pointer
 */

ar *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int len;
	char *result;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;
	len = len1 + len2;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}


