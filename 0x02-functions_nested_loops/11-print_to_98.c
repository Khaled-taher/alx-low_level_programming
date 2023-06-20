/* more headers goes there */
#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_to_98 - Print numbers from given num to 98
 * @n: Input number to start with
 * Return: sum of 2 numbers
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (n < 98)
	{
		while (i <= 98)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
			i = i + 1;
		}
	}
	else if (n > 98)
	{
		while (i >= 98)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
			i = i - 1;
		}
	}
	else
		printf("%d", i);
	putchar('\n');
}
