/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_times_table - Print the alphabet 10 tims
 *@n: Input number
 * Return: return nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar(k + '0');
				else if (k < 10  && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k < 100 && k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((k / 10) / 10) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
