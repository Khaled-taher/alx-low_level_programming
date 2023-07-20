#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/*
 * struct print - structure
 * @parameter: parameter of structure
 * @f: function related to parameter
 */
typedef struct print
{
	char *parameter;
	void (*f)(va_list);
} print_struct;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 
