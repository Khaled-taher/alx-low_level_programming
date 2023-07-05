#include "main.h"

/**
 * factorial - concatinate to strings
 * @n: scource taht will be concatinated
 * Return: pointer to destination
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
