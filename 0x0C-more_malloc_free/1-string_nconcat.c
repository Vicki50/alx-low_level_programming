#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int _strlen(char *str);
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Size of memory
 * Return: Pointer to an array of char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s2 = _strlen(s2);

	if ((int) n >= len_s2)
	{
		n = len_s2;
	}
	str = malloc(_strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for  (j = 0; j < (int) n; j++)
		{
			str[j + _strlen(s1)] = s2[j];
		}
		str[j + _strlen(s1)] = '\0';
	}
	return (str);


}

/**
 * _strlen - A function that calculate the length of a string
 * @str: String parameter
 * Return: Length of string
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
