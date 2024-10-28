#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints the elements of an integer array
 * @array: The array to print
 * @size: The number of elements in the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

