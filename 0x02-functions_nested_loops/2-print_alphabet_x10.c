/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Print the alphabet 10 tims
 *
 * Return: return nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	i = 0;
	while (i < 10)
	{
		/* your code goes there */
		for (a = 'a'; a <= 'z'; ++a)
			_putchar(a);
		_putchar('\n');
		i = i + 1;
	}
}
