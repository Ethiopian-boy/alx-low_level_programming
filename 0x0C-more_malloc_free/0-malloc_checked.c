#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc
*@b: size of the pointer
*Return: A pointer to the allocated memory or exit
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
