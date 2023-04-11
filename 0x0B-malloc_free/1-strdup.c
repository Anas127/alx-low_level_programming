#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns ptr to a newly allocated space
 * @str: string
 * Return: NULL if str is NULL, a ptr otherwise
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
