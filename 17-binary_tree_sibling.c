#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_sibling - check the sibling node
 * @node: root of the tree
 * Return: Sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	return (NULL);
}
