#include "main.h"

/**
 * rot13 - change n to 98
 * @s: pointer to string
 * Return: return nothing
 */
char *rot13(char *s)
{
	int i, j;
	char A1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char A2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == A1[j])
			{
				s[i] = A2[j];
				break;
			}
		}

		i = i + 1;
	}

	return (s);
}
