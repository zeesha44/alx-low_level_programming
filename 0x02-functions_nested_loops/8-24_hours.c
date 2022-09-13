#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	int hr_remainder, min_remainder;

	while(hours <= 23)
	{
		while (min <= 59)
		{
			min_remainder = min % 10;
			hr_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hr_remainder + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_remainder + '0');
			min++;
			_putchar('\n');
		}
		hours++;
		min = 0;
	}
}
