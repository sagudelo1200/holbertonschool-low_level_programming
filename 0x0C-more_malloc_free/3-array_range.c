#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - creates array from min number to max numer
 * @min: minimun number
 * @max: maximun number
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, i = 0, j = min;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * max - min + 1);
	if (!array)
		return (NULL);
	for (i = 0; i <= max - min; i++, j++)
	{
		array[i] = j;
	}
	return (array);
}
