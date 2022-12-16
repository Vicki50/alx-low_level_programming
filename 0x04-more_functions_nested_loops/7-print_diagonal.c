#include "main.h"

/**
 *print_diagonal - diagonal drawing
 *
 *@n: entry point
 *
 */

void print_diagonal(int n)
{
	int diago, space;

	if (n > 0)
	{
		for (diago = 0; diago < n; diago++)
		{
			for (space = 0; space < diago; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (diago == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
