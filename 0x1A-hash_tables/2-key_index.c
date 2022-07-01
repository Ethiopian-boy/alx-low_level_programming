#include "hash_tables.h"

/**
 * key_index - Get the index of the value
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index of the key
 *
 * Description: use the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
