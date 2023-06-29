#include "main.h"

/**
 * _strcmp - compare between to strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 if same and number of different char
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, l, result;

	j = strlen(s1);
	k = strlen(s2);

	if (j >= k)
		l = j;
	else
		l = k;

	for (i = 0; i < l; i++)
	{
		if (s1[i] == s2[i])
			result = 0;
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
