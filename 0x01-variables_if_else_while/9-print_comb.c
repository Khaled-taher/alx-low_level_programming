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

	for (a = '1'; a <= '9'; ++a)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar('\t');
		}
		else
			break;

	}
	putchar('\n');
	return (0);
}
