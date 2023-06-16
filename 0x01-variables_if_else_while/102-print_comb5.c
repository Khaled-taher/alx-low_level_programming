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
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; ++a)
	{
	for (b = '0'; b <= '8'; ++b)
	{
		for (c = '0'; c <= '9'; ++c)
		{
		for (d = '1'; d <= '9'; ++d)
		{
			if ((a * 10 + b) >= (c * 10 + d))
			{
				continue;
			}
			else
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if ((a * 10 + b) == 98 && (c * 10 + d) == 99)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
