#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storaged of chars an array is initialized with
 * Return: pointer of an array chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cr;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
