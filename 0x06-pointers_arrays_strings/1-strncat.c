
#include "main.h"

/**
 * _strncat - A function that Concatenates two strings
 *
 * description: The _strncat function is similar to the _strcat function,
 *		except that
 *		. it will use at most n bytes from src and
 *		. src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
