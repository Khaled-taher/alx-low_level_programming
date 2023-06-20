/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_last_digit - determine number is +, - or 0
 * @n: Number to be checked
 * Return: return 1 if lowercase, 0 otherwise
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
