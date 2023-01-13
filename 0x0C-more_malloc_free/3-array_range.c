#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: min number
 * @max: max number
 * Return: Integer between min and max
 */
int *array_range(int min, int max)
{
	int *space;

	if (min > max)
	{
		return (NULL);
	}

	space = malloc(((max - min) + 1) * sizeof(int));
	if (space == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0, j = min ; (i < ((max - min) + 1) && j <= max);
				i++, j++)
		{
			space[i] = j;
		}
		return (space);
	}
}
