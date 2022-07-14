#include "main.h"
#include <string.h>

/**
 * _strncpy -> copying purpose
 * @dest: first param
 * @src: string for second param
 * @n: string for third param
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
