#include "hash_tables.h"
/**
 * key_index -returns index to key 
 * @key: key
 * @size: size of array of the hash tablw
 * Return: index
 */
unsigned long int hash_djb2(const unsigned char *str);
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

