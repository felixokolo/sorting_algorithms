#include "sort.h"
/**
 * quick_sort - function that sorts an array of
 * integers in ascending order using the Quick sort algorithm
 * @array: List to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j = size - 1;
	int dir = 0, sorted = 0, tmp;

	while (!sorted)
	{
		if (*(array + i) > *(array + j))
		{
			tmp = *(array + i);
			*(array + i) = *(array + j);
			*(array + j) = tmp;
			dir = dir == 0 ? 1 : 0;
			if (dir == 0)
			j--;
			else
			i++;
		}
}
