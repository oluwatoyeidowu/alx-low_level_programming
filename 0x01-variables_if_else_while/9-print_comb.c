#include <stdio.h>

/**
*assign a random number to the variable n each time it is executed
*print the last digit of the number stored in the variable n
*Return : always 0
*/
int main(void)

{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10); /* this is an ASCII code for a new: line */
	return (0);
}
