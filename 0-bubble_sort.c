#include "sort.h"
/**
 * bubble_sort - This function sorts an array of integers
 * in ascending order
 * @array: Array of numbers
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, swap, tmp;

	if (array == NULL || size < 2)
		return;
	tmp = 0;
	while (tmp != size - 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i + 1];
				array[i + 1] = array[i];
				array[i] = swap;
				print_array(array, size);
			}
		}
	tmp++;
	}
}
