#include <stdarg.h>

/**
 * sum_them_all - prints the su of all parameters together
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list alist;

	if (n == 0)
		return (0);

	va_start(alist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(alist, int);
	}
	va_end(alist);
	return (sum);
}
