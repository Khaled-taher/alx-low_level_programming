#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int e;
	int f;

	for (e = 0; e <= 98; ++e)
	{
		for (f = e + 1; f <= 99; ++f)
		{
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
			if (e == 98 && f == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
