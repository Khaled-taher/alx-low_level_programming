/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * times_table - Print the alphabet 10 tims
 *
 * Return: return nothing
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	j = 0;

	while (j < 10)
	{
		i = 0;

		while (i < 10)
		{
			k = i * j;
			if (k >= 10)
				_putchar((k / 10) + '0');
			else
				_putchar(' ');
			_putchar((k % 10) + '0');
			i = i + 1;
			if (i == 10)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		j = j + 1;
		if (j == 10)
			continue;
		_putchar('\n');
	}

}
