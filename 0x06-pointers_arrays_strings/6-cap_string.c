#include "main.h"

/**
 * cap_string -> capitalization string
 * @x: string
 * Return: dest
 */
char *cap_string(char *x)
{
	int n = 0, i;
	int july_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(x + n) >= 97 && *(x + n) <= 122)
		*(x + n) = *(x + n) - 32;
	n++;
	while (*(x + n) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(x + n) == july_words[i])
			{
				if ((*(x + (n + 1)) >= 97) && (*(x + (n + 1)) <= 122))
					*(x + (n + 1)) = *(x + (n + 1)) - 32;
				break;
			}
		}
		n++;
	}
	return (x);
}
