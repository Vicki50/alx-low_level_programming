#include "main.h"

/**
 * print_number - main block
 *
 * description: prints an integer
 *
 * @n: entry point
 */

void print_number(int n)
{
	unsigned int digit;

	digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}
	if ((digit / 10) > 0)
	{
		print_number(digit / 10);
	}
	_putchar((digit % 10) + 48);
}
