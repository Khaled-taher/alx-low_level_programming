#include "main.h"

/**
 * cap_string - change n to 98
 * @s: pointer to string
 * Return: return nothing
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i - 1] == '\n' ||
			s[i - 1] == '\t' ||
			s[i - 1] == ' ' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == ')' ||
			s[i - 1] == '}' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == '{' ||
			i == 0)
				s[i] = s[i]  - 32;
			i = i + 1;
		}
		i = i + 1;
	}
	return (s);
}
