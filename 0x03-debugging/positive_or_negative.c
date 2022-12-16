#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - print a random num
 *
 *@i: entry point
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
