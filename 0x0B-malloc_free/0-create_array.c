#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array of chars
 * @size: int
 * @c: character
 * Return: pointer to array if success, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
