#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Size of memory to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
	{
		exit(98);
	}
	else
		return (space);
}
