#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *sk;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (sk == NULL)
		return (NULL);

	sk->size = size;
	sk->array = malloc(sizeof(hash_node_t *) * size);
	if (sk->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (sk);
}
