#include "main.h"

/**
*_strcat - concatenates the string pointed to by @src to the end of the stringing pointed to by @dest
*@dest: String that will be appended
@src: String to be concatenated upon
*
*Return: return pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

		while(dest[index++])
