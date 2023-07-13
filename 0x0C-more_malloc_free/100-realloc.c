#include "main.h"

/**
 * _realloc - concatenates all the arguments of your program
 * @ptr: number of arguments
 * @old_size: array of arguments
 * @new_size: new size
 * Return: pointer to a new string, or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *str;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(char) * (new_size + 1));

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	str = malloc(sizeof(char) * old_size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		str[i] = ((char *)ptr)[i];
	ptr = malloc(sizeof(char) * new_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		((char *)ptr)[i] = str[i];
	free(str);
	return (ptr);

}
