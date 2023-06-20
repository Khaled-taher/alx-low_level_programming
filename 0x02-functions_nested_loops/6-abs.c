/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * _abs - determine number is +, - or 0
 * @n: Number to be checked
 * Return: return 1 if lowercase, 0 otherwise
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	else
		return (0);
}
