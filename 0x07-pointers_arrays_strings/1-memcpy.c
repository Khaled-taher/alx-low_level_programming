#include "main.h"

/**
 * _memcpy - concatinate to strings
 * @dest: pointer to area of destination
 * @src: pointer to area of source
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n = n - 1;
	}

	return (dest);
}

