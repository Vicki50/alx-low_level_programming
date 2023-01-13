#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: Element
 * @size: Type size
 * Return: Pointer of type void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	space = malloc(nmemb * size);

	if (space == NULL)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < ((int)(nmemb * size)); i++)
		{
			space[i] = 0;
		}
		return (space);
	}
}
