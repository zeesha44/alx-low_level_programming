#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (0);
	l = 0;
	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);


