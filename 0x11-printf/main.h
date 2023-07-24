#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct op - it is a struct
 * @s: selecting char
 * @f: function related to selecting char
 */
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
int print_mark(void);
int print_int(va_list args);
int print_bin(va_list args);
int print_unsig(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_STR(va_list args);
void p_HEX(unsigned long int n);
int p_hex(unsigned long int n);
int print_STR(va_list args);
int print_ptr(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);

#endif /* MAIN_H */
