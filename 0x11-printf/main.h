#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct op
{
	char *s;
	int (*f)();
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_function(char c))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_perc(void);
int print_int(va_list args);
int print_bin(va_list args);

#endif /* MAIN_H */
