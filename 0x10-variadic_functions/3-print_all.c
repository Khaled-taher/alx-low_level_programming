#include "variadic_functions.h"

/**
 * print_char - concatinate to strings
 * @c: the char used to separate numbers
 * Return: pointer to destination
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - concatinate to strings
 * @n: the char used to separate numbers
 * Return: pointer to destination
 */
void print_int(va_list n)
{
	printf("%d", va_arg(n, int));
}

/**
 * print_float - concatinate to strings
 * @f: the char used to separate numbers
 * Return: pointer to destination
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_str - concatinate to strings
 * @str: the char used to separate numbers
 * Return: pointer to destination
 */
void print_str(va_list str)
{
	char *s = va_arg(str, char *);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - concatinate to strings
 * @format: the char used to separate numbers
 * Return: pointer to destination
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	print_struct p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args,  format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != p[j].parameter[0])
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			p[j].f(args);
			sep = ", ";
		}

		i++;
	}
	putchar('\n');
	va_end(args);
}
