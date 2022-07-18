#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	int sorted, c, tmp;

	sorted = 0;
	while (!sorted)
	{
		for (c = 0; c < (size - 1); c++)
		{
			sorted = 1;
			if (*(array + c) > *(array + c + 1))
			{
				tmp = *(array + c);
				*(array + c) = *(array + c + 1);
				*(array + c + 1) = tmp;
				sorted = 0;
				print_array(array, size);
			}
		}
	}
}
