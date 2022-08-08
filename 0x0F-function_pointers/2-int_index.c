#include "function_pointers.h"

/**
 * int_index - integers
 * @array: elements in the array.
 * @size: numbers of element in array.
 * @cmp: a pointer to the function
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
