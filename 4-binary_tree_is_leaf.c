#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if node have childs
 * @node: node for check if have childs
 * Return: 1 if is leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
