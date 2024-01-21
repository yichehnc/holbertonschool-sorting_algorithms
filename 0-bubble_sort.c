#include "sort.h"

/**
 * swap - swap the values
 * @a: first value
 * @b: second value
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Program to sort integers using the the Bubble sort algorithm
 *
 * @array: Array of integers to be sorted
 * @size: Size of array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	/* size_t j; */
	int swapped = 0;
	int continue_sorting = 1;

	if (array == NULL || size  == 0)
		exit(98);

	while (continue_sorting)
	{
		swapped = 0;
		i = 0;
		while ((i + 1) < size)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				swapped = 1;
				print_array(array, size);
			}
			i++;
		}

		if (swapped == 0) /* nothing left to sort! */
			continue_sorting = 0;
	}

}
