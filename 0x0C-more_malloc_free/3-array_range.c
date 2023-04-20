#include "main.h"

/**
 * *array_range - creates an array of int
 * @min: int
 * @max: int
 * Return: a ptr
 */

int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
