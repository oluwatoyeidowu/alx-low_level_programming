#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates to strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *so
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + n;

	so = malloc(k + 1);

	if (so == NULL)
		return (NULL);

	for (i = 0; l < k; l++)
		if (l < i)
			so[l] = s1[l];
		else
			so[l] = s2[l - i];
	so[l] = '\0';

	return (so);
}
