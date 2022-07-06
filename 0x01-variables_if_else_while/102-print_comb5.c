#include <stdio.h>

/**
* main - assign a random number to the variable n each time it is executed
* print the last digit of the number stored in the variable n
* Return: always 0
*/
int main(void)
{
int i, j;

for (i = 0; j <= 99; j++)
{
for (i = j; i <= 99; i++)
{
if (i !=j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(1 / 10 + 48);
putchar(1 % 10 + 48);
{
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
