#include "main.h"
#include <time.h>

/**
 * main - check the code 
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	char pw[84];
	int i, s, diff1, diff2;

	i = 0;
	s = 0;

	srand(time(0));

	while (s < 2772)
	{
		pw[i] = 33 + rand() % 94;
		s = s + pw[i++];
	}
	pw[i] = '\0';

	if (s != 2772)
	{
		diff1 = (s - 2772) / 2;
		diff2 = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
			diff1++;

		for (i = 0; pw[i]; i++)
		{
			if (pw[i] >= (33 + diff1))
			{
				pw[i] = - pw[i] - diff1;
				break;
			}
		}

		for (i = 0; pw[i]; i++)
                {
                        if (pw[i] >= (33 + diff2))
                        {
                                pw[i] = - pw[i] - diff2;
                                break;
                        }
                }

	}
	printf("%s", pw);
	return (0);
}
