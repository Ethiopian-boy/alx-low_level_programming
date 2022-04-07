#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *array_range - create an array of integers
*@min: minimum number to start
*@max: maximum number to start
*Return: the pointer created or NULL
*/
int *array_range(int min, int max)
{
	int *p, i, d;

	if (min > max)
		return (NULL);

	d = max - min;
	p = malloc((d + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= d; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
