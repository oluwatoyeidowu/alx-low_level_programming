#include "main.h"
#include <string.h>

/**
 * _strncat -> function to append on concatenates two strings
 * @dest: String first param
 * @src: String second param
 * @n: String third param
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
