#include "main.h"

/** binary_to_uint -converts a binary to an unsigned int
 * @b: pointer to string of 0 1 chars
 *
 * Return: converted number or 0 if b contains char not 0 or 1
 * 				or b == NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int i;

	for (i = 0; i < sizeof(b); i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (NULL);
		else
			count++;
	}

	for (i = count; i >= 0; i--)
	{
		for (j = 0; sum += b[i] * 2
