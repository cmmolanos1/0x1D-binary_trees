#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_uncle - return the uncle node
 * @node: root of tree
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (NULL);
}
