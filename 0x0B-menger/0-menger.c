#include "menger.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
/**
 * print - print-char
 * @col:  inout column
 * @row: input row
 * Return: 1 or 0
 */
char print(int col, int row)
{
	for (; col && row; col /= 3, row /= 3)
		if (col % 3 == 1 && row % 3 == 1)
			return (' ');
	return ('#');
}

/**
 * menger -  function that draws a 2D Menger Sponge
 * @level: level of the Menger Sponge
 */
void menger(int level)
{
	int col, row, size;

	if (level >= 0)
	{
		size = pow(3, level);
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
				printf("%c", print(col, row));
			printf("\n");
		}
	}
}