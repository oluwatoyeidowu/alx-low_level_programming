#include <stdio.h>
/**
* main - assign a random number to the variable n each time it is executed
* print the last digit of the number stored in the variable n
* Return: always 0
*/
int main(void)
{
	/**
	* hexadecimal
	* 0 1 2 3 4 5 6 7 8 9 a b c d e f
	*/
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

