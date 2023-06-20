/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_alphabet - Print the alphabet of english
 *
 * Return: return nothing
 */
void print_alphabet(void)
{
	char (a);

	/* your code goes there */
	for (a = 'a'; a <= 'z'; ++a)
		_putchar(a);
	_putchar('\n');
}
