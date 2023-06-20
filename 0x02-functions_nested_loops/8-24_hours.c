/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * jack_bauer - Print the alphabet 10 tims
 *
 * Return: return nothing
 */
void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0; h > 24; h++)
	{
		for (m = 0; m > 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
