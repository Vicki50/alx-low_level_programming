#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line
 *
 * descritpion: fstrng is set as the first count
 *
 * @s: String pointer input
 *
 * Return: string in reverse
 *
 */

void print_rev(char *s)
{
	int fstrng = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fstrng++; /*fstrng = first string*/
	}

	for (n = (fstrng - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
