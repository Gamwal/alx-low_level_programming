#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the value of n if greater than 5, is 0 or btwn 0 and 6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit is %d and %d is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit is %d and %d is  is negative\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit is %d and %d is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
