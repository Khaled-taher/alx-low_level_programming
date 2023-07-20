#include "variadic_functions.h"

/**
 * sum_them_all - concatinate to strings
 * @n: scource taht will be concatinated
 * Return: pointer to destination
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, s = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s = s + x;
	}
	va_end(args);

	return (s);
}
