#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints change left
 * @args: parameter entry
 * @argv: one number of arguments
 * Return: 0 or 1
 */
int main(int args, char *argc[])
{
	int c, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for(; c >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)

