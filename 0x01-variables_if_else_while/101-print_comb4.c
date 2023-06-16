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
	int a;
	int b;
	int c;

	for (a = '0'; a <= '7'; ++a)
	{
		for (b = '1'; b <= '8'; ++b)
		{
		if (b > a)
		{
			for (c = '2'; c <= '9'; ++c)
			{
				if (c <= b)
					continue;
				else
				{
					putchar(a);
					putchar(b);
					putchar(c);
				if (a == '7' && b == '8' && c == '9')
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
		else
			continue;
		}
	}
	putchar('\n');
	return (0);
}
