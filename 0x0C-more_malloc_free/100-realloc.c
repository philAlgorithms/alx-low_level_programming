#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointed to the old memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_clone, *mem_val;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}

	ptr_clone = ptr;
	memory = malloc(sizeof(*ptr_clone) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem_val = memory;

	for (i = 0; i < new_size && i < old_size; i++)
		mem_val[i] = *ptr_clone++;
	free(ptr);
	return (memory);
}
