#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - check if tree is full
 * @tree: root of tree
 * Return: 1 if is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
