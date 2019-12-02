#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_leaves - size of the tree
 * @tree: root of the treee
 * Return: the same function for count leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
}
