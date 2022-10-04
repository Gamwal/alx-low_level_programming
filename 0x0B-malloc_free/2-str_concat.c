#include "main.h"

/**
 * str_concat - program returns a pointer to a newly allocated
 *           space in memory, which contains the contents of s1
 *           followed by the contents of s2, and null terminated
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: NULL if str is NULL or insufficent memory was available
 *         else, a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, len = 0, concat_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
