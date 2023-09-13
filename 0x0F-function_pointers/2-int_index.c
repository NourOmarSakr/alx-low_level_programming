#include "function_pointers.h"

/**
 * int_index - searching for an int
 * @array: input int array.
 * @size: size of the array.
 * @cmp: pointer to the function to compare values.
 * Return: index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
