#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * get_max - get max of an array.
 * @array: array.
 * @size:  size of the array.
 * Return: max.
 *
 */


int get_max(int *array, size_t size)
{
int max = array[0];

for (size_t i = 1; i < size; i++)
{
if (array[i] > max)
max = array[i];
}
return (max);
}

/**
 * radix_sort - sorts an array of integers using the Radix sort algorithm.
 * @array: array.
 * @size:  size of the array.
 */

void radix_sort(int *array, size_t size)
{

int bucket[10][10], bucket_cnt[10];
size_t i;
int  j, k, r, NOP = 0, divisor = 1, lar, pass;

if (array == NULL || size < 2)
return;
lar = get_max (array, size);
while (lar > 0)
{
NOP++;
lar /= 10;
}
for (pass = 0; pass < NOP; pass++)
{
for (i = 0; i < 10; i++)
{
bucket_cnt[i] = 0;
}
for (i = 0; i < size; i++)
{
r = (array[i] / divisor) % 10;
bucket[r][bucket_cnt[r]] = array[i];
bucket_cnt[r] += 1;
}
i = 0;
for (k = 0; k < 10; k++)
{
for (j = 0; j < bucket_cnt[k]; j++)
{
array[i] = bucket[k][j];
i++;
}
}
divisor *= 10;
print_array(array, size);
}
}
