#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints
 * @format: lists arguments passed to print all function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list arg;
	char *string, *sep;

	va_start(arg, format);

	sep = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, int));
				break;
			case 's':
				string = va_arg(arg, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", sep, string);
				break;
			default:
				i++;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
