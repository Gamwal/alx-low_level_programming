#include "main.h"

/**
 * _isalpha - checks code
 * @c: the letter to be checked
 *
 * Description: checks to ensures characters is alphabet
 *
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
