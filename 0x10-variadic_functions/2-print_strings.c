#include "variadic_functions.h"

/**
 * print_strings - concatinate to strings
 * @separator: the char used to separate numbers
 * @n: scource taht will be concatinated
 * Return: pointer to destination
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

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
