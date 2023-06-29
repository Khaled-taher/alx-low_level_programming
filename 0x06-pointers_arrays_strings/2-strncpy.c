#include "main.h"

/**
 * _strncpy - copy src to the end of dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of byte to be copied
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];

	return (dest);

}
