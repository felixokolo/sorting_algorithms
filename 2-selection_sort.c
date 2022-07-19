#include "sort.h"
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order using the Selection sort algorithm
 * @array: List to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t c, j;
	int tmp, tmp2;

	for (c = 0; c < size; c++)
	{
		tmp = *(array + c);
		tmp2 = -1;
		for (j = c; j < size; j++)
		{
			if (*(array + j) < tmp)
			{
				tmp2 = j;
				tmp = *(array + j);
			}
		}
		if (tmp2 >= 0)
		{
			*(array + tmp2) = *(array + c);
			*(array + c) = tmp;
			print_array(array, size);
		}
	}
}
