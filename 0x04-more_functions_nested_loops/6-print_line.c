#include "main.h"

/**
 * print_line - main block
 *
 * description: prints a straight from the user input
 *
 * @n: entry point
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
