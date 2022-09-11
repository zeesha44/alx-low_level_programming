#include <stdio.h>
/**
 * main - prints all possible combinations of two different digits
 *
 * Return: always 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0 ; d1 < 99 ; d1++)
	{
		for (d2 = d1 + 1 ; d2 < 100 ; d2++)
		{
			putchar((d1 / 10) + '0');
			putchar((d1 % 10) + '0');
			putchar(' ');
			putchar((d2 / 10) + '0');
			putchar((d2 % 10) + '0');
			if (d1 == 97 && d2 == 98)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
