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
		return (1);
		_putchar('+');
	}
	else if (c >= 65 && c <= 90)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
}
