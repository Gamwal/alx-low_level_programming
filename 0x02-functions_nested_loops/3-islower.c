#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: the number to be checked
 *
 * Description: Checks for lowercase character
 *
 * Return: 0 Always (Success).
 */

int _islower(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
