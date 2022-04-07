#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_memset - copies a character to the firstn characters of the string pointed
*@s: original string
*@b: value to remplace
*@n: number of bytes
*Return: s (string modify)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
* *_calloc - allocates memory for an array using malloc
*@nmemb: numer of elements
*@size: size of bytes
*Return: pointer to the allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, (nmemb * size));
	return (p);
}
