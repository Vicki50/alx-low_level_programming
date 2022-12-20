#include "main.h"
#include <stdio.h>

/**
 * swap_int - Main block
 *
 * description: A function that swaps the values of two integers
 *
 * @a: Entry point first integer
 * @b: Entry point second integer
 *
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
