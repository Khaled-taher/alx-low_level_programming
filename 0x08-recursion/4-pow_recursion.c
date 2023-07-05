#include "main.h"

/**
 * _pow_recursion - concatinate to strings
 * @x: scource taht will be concatinated
 * @y: scource taht will be concatinated
 * Return: pointer to destination
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
