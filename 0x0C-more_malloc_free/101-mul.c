#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int check_int(char *str);
void print_error(void);
void my_putchar(long var);

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Returm multiplication of two numbers
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if ((argc < 3) || (argc > 3))
	{
		print_error();
		exit(98);
	}
	if ((check_int(argv[1])) && (check_int(argv[2])))
	{
		mul = check_int(argv[1]) * check_int(argv[2]);
		my_putchar(mul);
		_putchar('\n');
	}
	else
	{
		print_error();
		exit(98);
	}
	return (0);

}

/**
 * check_int - A function to check if an argument is integer
 * @str: String parameter
 * Return: Return status 0 or 1
 */
int check_int(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' &&  str[i] <= '9')
		{
			if (i == 0)
			{
				num += str[0] - '0';
			}
			else
			{
				num = (num * 10) + str[i] - '0';
			}
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
/**
 * print_error - A function that print error using _putchar
 * Return: void
 */
void print_error(void)
{
	char str[] = "Error\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * my_putchar - A function  that print integers using _putchar
 * @var: Variable
 * Return: void
 */

void my_putchar(long var)
{

/* print '-' for negative numbers */
	if (var < 0)
	{
		_putchar('-');
		var = var * -1;
	}
/* Print Zero */
	if (var == 0)
		_putchar('0');
	if (var / 10)
		my_putchar(var / 10);
	_putchar(var % 10 + '0');
}
