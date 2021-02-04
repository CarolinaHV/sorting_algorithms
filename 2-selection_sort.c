#include "sort.h"
/**
 * selection_sort - 
 * @array:
 * @size:
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, t, current;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (t = i + 1; t < size; t++)
		{
			if (array[t] < array[min])
			{
				min = t;
			}
		}
		if (array[min] < array[i])
		{
			current = array[i];
			array[i] = array[min];
			array[min] = current;
			print_array(array, size);
		}
	}
}
