#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash table array
 *
 * Return: Pointer to newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **node_array;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	node_array = malloc(sizeof(hash_node_t *) * size);
	if (node_array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = node_array;

	return (hash_table);
}
