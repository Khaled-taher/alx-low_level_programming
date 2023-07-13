#include "main.h"

/**
 * array_range - concatinate to strings
 * @min: destination to concatinate after
 * @max: scource taht will be concatinated
 * Return: pointer to destination
 */
int *array_range(int min, int max)
{
	int num, i;
	int *array;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	array = malloc(sizeof(int) * num);

	if (array == NULL)
		return (NULL);

	for (i = min; i < num; i++)
		array[i - min] = i;

	return (array);
}
