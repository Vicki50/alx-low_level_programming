#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count++ <= 9)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');

	}
}
