#include <stdio.h>

/**
 * main - main block
 *
 * description: A program that prints numbers 1 to 100
 * it prints FIZZ for multiples of 3
 * it peints BUZZ for multiples of 5
 * it prints FIZZBUZZ for multiplea of 3 and 5
 *
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}
