#include "sort.h"

/**
 * get_max - Returns the number of digits of the biggest int in the array.
 *
 * @array: array to seach into.
 * @size: size of the array.
 *
 * Return: the biggest element of the array.
 */

int get_max(int *array, size_t size)
{
maxNum;
size_t i;
maxNum = array[0];
for (i = 1; i < size; i++)
{
if (array[i] > maxNum)
maxNum = array[i];
}
return (maxNum);
}

/**
 * current_digit_sort - current_digit_sort
 * @array: pointer
 * @size: length
 * @tmp: tmp
 * @exp: exp
 * Return: 0
 */
int current_digit_sort(int *array, ssize_t size, int *tmp, long exp)
{
	ssize_t i;
	int aux[10] = {0};

	for (i = 0; i < size; i++)
		aux[(array[i] / exp) % 10]++, tmp[i] = 0;
	for (i = 1; i < 10; i++)
		aux[i] += aux[i - 1];
	for (i = size - 1; i >= 0; i--)
		tmp[--aux[(array[i] / exp) % 10]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = tmp[i];
	return (0);
}
/**
 * radix_sort - radix_sort
 * @array: pointer
 * @size: length
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	long exp = 1;
	int *tmp, max = 0;

	if (!array || size < 2)
		return;

	tmp = malloc(sizeof(int *) * size);
	if (!tmp)
		return;

	max = get_max(array, size);

	while (max / exp > 0)
	{
		current_digit_sort(array, size, tmp, exp);
		print_array(array, size);
		exp *= 10;
	}
	free(tmp);
}
