#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);
	}
	while (index < size)
	{
		new_table->array[index] = NULL;
		index++;
	}
	new_table->size = size;
	return (new_table);
}
