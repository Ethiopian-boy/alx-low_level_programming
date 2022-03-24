#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: first input string
 * @n2: second input string
 * @r: pointer to buffer where result is stored
 * @size_r: requested size for the buffer
 * Return: pointer to buffer where result is stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, c;

	i = j = c = 0;
	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		j = 1;
	}
	while (i < size_r && (n1[i] != '\0' || n2[i] != '\0' || r[j] != '\0'))
	{
		if ((n1[i + 1] - '0') + (n2[i + 1] - '0') >= 10)
			c = 1;
		else
			c = 0;
		r[j] = (n1[i] - '0') + (n2[i] - '0') + c;
		r[j] = r[j] % 10 + '0';
		i++;
		j++;
		if (n1[i] == '\0' || n2[i] == '\0')
			r[j] = '\0';
	}
	r[j] = '\0';
	return (r);
}
