#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: param
 * @size: param
 * @cmp: param
 * Return: -1 if fail, index otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
