#include "main.h"

/**
 * _isdigit - check if input is digit
 *@c: input char
 * Return: Return 1 if digit and  0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
