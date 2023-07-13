#include "main.h"

/**
 * _calloc - concatinate to strings
 * @nmemb: destination to concatinate after
 * @size: scource taht will be concatinated
 * Return: pointer to destination
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
