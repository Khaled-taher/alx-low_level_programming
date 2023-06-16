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

	for (a = '0'; a <= '8'; ++a)
	{
		for (b = '1'; b <= '9'; ++b)
		{
			if (b <= a)
			{
				continue;
			}
			else
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
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
	putchar('\n');
	return (0);
}
