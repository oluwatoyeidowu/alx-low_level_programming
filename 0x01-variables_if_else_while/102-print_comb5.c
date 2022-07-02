#include <stdio.h>

/**
*assign a random number to the variable n each time it is executed
*print the last digit of the number stored in the variable n
*Return : always 0
*/
int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 57 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10); /* this is an ASCII code for a new: line */
	return (0);
}
