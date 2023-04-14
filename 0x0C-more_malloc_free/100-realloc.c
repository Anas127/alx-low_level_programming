#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p;
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_p = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = new_p[i];
	}
	free(ptr);
	return (new_ptr);
}




