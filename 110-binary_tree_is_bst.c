#include "binary_trees.h"
#include <limits.h>
/**
 * isBST - check if tree is BST
 * @node: root of tree
 * @min: min number
 * @max: max number
 * Return: 1 if is BST otherwise 0
 */

int isBST(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);
	if (node->n < min || node->n > max)
		return (0);
	return (isBST(node->left, min, node->n - 1) &&
		isBST(node->right, node->n + 1, max));
}

/**
 * binary_tree_is_bst - check if tree is BST
 * @tree: root of tree
 * Return: 1 if is bst otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
