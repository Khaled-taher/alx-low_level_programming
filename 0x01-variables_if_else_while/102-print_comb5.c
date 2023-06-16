#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

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

	for (e = 0; e >= 98; ++e)
	{
		for (f = 1; f >= 99; ++f)
		{
			if (e >= f)
			{
				continue;
			}
			else
			{
				putchar(e / 10);
				putchar(e % 10);
				putchar(' ');
				putchar(f / 10);
				putchar(f % 10);
				if (e == 98 && f == 99)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
