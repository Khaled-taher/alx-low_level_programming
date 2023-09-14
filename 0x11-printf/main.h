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
	int (*f)(va_list, int, int, int, int);
} op_t;

/**
 * struct flg - it is a struct
 * @s: selecting char
 * @n return value to take decision
 */
typedef struct flg
{
	char *s;
	int n;
} flg_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_function(const char *str, int *ptr))(va_list, int, int, int, int);
int get_flag(const char *str);
int get_width(const char *str);
int get_precision(const char *str);
int print_char(va_list args, int flg, int width, int precision, int length);
int print_str(va_list args, int flg, int width, int precision, int length);
int print_mark(va_list args, int flg, int width, int precision, int length);
int print_int(va_list args, int fld, int width, int precision, int lenght);
int print_bin(va_list args, int flg, int width, int precision, int length);
int print_unsig(va_list args, int flg, int width, int precision, int lenght);
int print_oct(va_list args, int flg, int width, int precision, int lenght);
int print_hex(va_list args, int flg, int width, int precision, int lenght);
int print_HEX(va_list args, int flg, int width, int precision, int lenght);
int print_STR(va_list args, int flg, int width, int precision, int length);
void p_HEX(unsigned long int n);
int p_hex(unsigned long int n);
int print_STR(va_list args, int flg, int width, int precision, int length);
int print_ptr(va_list args, int flg, int width, int precision, int length);
int print_rev(va_list args, int flg, int width, int precision, int length);
int print_rot13(va_list args, int flg, int width, int precision, int length);
int arr_len(unsigned long int temp,unsigned long int *exp, int base);
int print_sign(int flg, int minus);
int print_ledding_char(int n, char c);
int print_number(unsigned long int temp, unsigned long int exp, int base, int cap);
int get_width(const char *str);
int get_precision(const char *str);

#endif /* MAIN_H */
