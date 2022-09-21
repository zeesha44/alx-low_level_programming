#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to be appended to 
 * @src: string to be concatenated at the end of @dest
 * @n: integer parameter to compare index
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for(index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
