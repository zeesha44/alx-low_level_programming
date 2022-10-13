#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings then a new line
 * @separator: string printed inbetween strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	if (separator == NULL)
		separator = "";
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);

		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
