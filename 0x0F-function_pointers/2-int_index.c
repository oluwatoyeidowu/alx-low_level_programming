#include "function_pointers.h"

/**
 * int_indes - searches for an integer
 * @array: input integer array
 * @size of the array
 * @cmp: pointer to the function 
 * 
 * Return: no element matches or size <= 0, return -1
 * Otherwise - The index of the first element for which
 * the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
