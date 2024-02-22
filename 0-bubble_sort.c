#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - The name of the function hat sorts an array of integers in ascending order using the Bubble sort algorithm.
 *
 * @array - The input arrray
 *
 * @size - The array size
 *
*/
void bubble_sort(int *array, size_t size){
	size_t i, n;
	int tmp;

	for (n = size; n > 0; n--)
	{
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, n);
					
			}
		}
	}
}

