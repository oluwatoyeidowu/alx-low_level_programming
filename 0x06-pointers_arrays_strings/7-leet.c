#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @x: string
 * Return: dest
 */

char *leet(char *x)
{
	int n = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(x + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(x + n) == low_case[i] || *(x + n) == upper_case[i])
			{
				*(x + n) = num[i];
				break;
			}
		}
		n++;
	}
	return (x);
}
