#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function given as a parameter on each
 * @array: param
 * @size: param
 * @action: param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
