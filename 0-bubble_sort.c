#include "sort.h"
/**
 * bubble_sort -
 * @array:
 * @size:
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, swap, tmp;

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
