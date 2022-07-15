#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: num one
 * @n2: num2
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: String containing the first number
 * @n2: String containing the second number
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)

{

int num, tens = 0;

for (; *n1 && *n2; n1--, n2--, r_index--)

{
num = (*n1 - '0') + (*n2 - '0');
num += tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n1; n1--, r_index--)
{
num = (*n1 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n2; n2--, r_index--)
{
num = (*n2 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}
