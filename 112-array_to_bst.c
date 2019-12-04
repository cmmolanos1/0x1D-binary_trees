#include "binary_trees.h"
/**
 * array_to_bst - translate from array to BST
 * @array: pointer to the array
 * @size: array size
 * Return: created tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (size == 0 || array == NULL)
		return (NULL);
	
	for(i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
