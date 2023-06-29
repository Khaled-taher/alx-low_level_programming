#include "main.h"

/**
 * leet - change n to 98
 * @s: pointer to string
 * Return: return nothing
 */
char *leet(char *s)
{
	int i, j;

	int a1[] = {97, 101, 111, 116, 108};
	int a2[] = {65, 69, 79, 84, 76};
	int a3[] = {52, 51, 48, 55, 49};

	i = 0;
	j = 0;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a1[j] || s[i] == a2[j])
			{
				s[i] = a3[j];
				break;
			}
		}

		i = i + 1;
	}

	return (s);
}
