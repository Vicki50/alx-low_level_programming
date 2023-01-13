#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: Pointer whose memory was previously allocated with malloc
 * @old_size: Is the size, in byte of the allocated space for ptr
 * @new_size: Is the new size, in bytes of the new memory block
 * Return: Return a reallocated pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_space;
	char *old_space;
	int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_space = malloc(new_size);
	old_space = ptr;

	for (i = 0; i < (int) old_size; i++)
	{
		new_space[i] = old_space[i];
	}
	free(ptr);
	return (new_space);
}
