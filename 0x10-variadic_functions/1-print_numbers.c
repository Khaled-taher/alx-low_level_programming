#include "variadic_functions.h"

/**
 * print_numbers - concatinate to strings
 * @separator: the char used to separate numbers
 * @n: scource taht will be concatinated
 * Return: pointer to destination
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i == n - 1)
			continue;

		if (separator == NULL)
			putchar(' ');
		else
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
