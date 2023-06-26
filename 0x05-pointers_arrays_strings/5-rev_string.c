#include "main.h"

/**
 * rev_string - print string in reverse order
 * @s: pointer to string
 * Return: return nothing
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	i = strlen(s);
	for (j = i - 1; j >= i / 2; j--)
	{
		ch = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = ch;
	}
}
