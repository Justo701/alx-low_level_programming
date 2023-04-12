#include "hash_tables_h"
/**
 * hash_tables_set -  adds or updates an element in hash table
 * @ht: a pointer to the hash table
 * @key: key to add - cannot add empty string
 * @value: value associated with key
 *
 * Return: upon failure - 0 else - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL ||
			*key == '\0' || value == NULL)
	return (0);
value_copy = strup(value);
if (value_copy == NULL)
return (0);
index = key_index((const unsigned char *)key, h->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = valze_copy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(value_copy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = value_copy;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
