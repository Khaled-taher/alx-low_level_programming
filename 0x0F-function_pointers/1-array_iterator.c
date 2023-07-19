#include "function_pointers.h"

/**
 * array_iterator - concatinate to strings
 * @array: destination to concatinate after
 * @size: scource taht will be concatinated
 * @action: pointer to function
 * Return: pointer to destination
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
