#include "function_pointers.h"

/**
 * int_index - concatinate to strings
 * @array: destination to concatinate after
 * @size: scource taht will be concatinated
 * @cmp: pointer to function
 * Return: pointer to destination
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
