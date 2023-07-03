#include "main.h"

/**
 * _memset - concatinate to strings
 * @s: pointer to area of memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n = n - 1;
	}

	return (s);
}
