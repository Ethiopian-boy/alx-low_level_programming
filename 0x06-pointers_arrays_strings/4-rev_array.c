#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp, j;

	i = temp =  0;
	j = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i++] = a[j];
		a[j--] = temp;
	}
}
