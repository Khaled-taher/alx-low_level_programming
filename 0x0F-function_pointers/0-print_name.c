#include "function_pointers.h"

/**
 * print_name - concatinate to strings
 * @name: destination to concatinate after
 * @f: scource taht will be concatinated
 * Return: pointer to destination
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
