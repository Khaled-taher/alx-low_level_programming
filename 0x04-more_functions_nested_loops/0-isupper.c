#include "main.h"

/**
 * _isupper - check if charcter is capital
 *@c: input char
 * Return: Return 1 if char is capital and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
