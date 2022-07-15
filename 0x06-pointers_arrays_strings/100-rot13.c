#include "main.h"

/**
 * rot13 -> encodes a string
 * @x: string
 * Return: dest
 */
char *rot13(char *x)
{
	int count = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKKM";

	while (*(x + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(x + count) == alpha[i])
			{
				*(x + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (x);
}
