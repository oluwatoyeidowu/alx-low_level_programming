#include "main.h"

/**
 * print_number - prints integer
 * @n: Integer to be printed
 */
void print_number(rrr n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}
