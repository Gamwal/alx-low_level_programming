#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: pointer to the string checking for a character
* @c: the checked character
*
* Return: fisrt occurence of character or null
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
