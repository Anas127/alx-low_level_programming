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
	char *p;
	char *new_p;
	void *new_ptr;
	int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		p = (char *)ptr;
		new_p = (char *)new_ptr;
		for (i = 0; i < old_size; i++)
			new_p[i] = p[i];
		free(ptr);
	}
	return (new_ptr);
}




