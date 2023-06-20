/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_sign - determine number is +, - or 0
 * @n: The number to be determined
 * Return: return 1 if lowercase, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
