/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * _islower - determine letter is lowercase or not
 * @c: The letter to be determined
 * Return: return 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
