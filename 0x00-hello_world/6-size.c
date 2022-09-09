#include <stdio>

/**
 * main: Entry point
 *
 * Description: Prints the size of the type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char: %d byte(s)\n", sizeof(char));
	printf("The size of a int: %d byte(s)\n", sizeof(int));
	printf("The size of a long int: %d byte(s)\n", sizeof(long));
	printf("The size of a long long: %d byte(s)\n", sizeof(double));
	printf("The size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
