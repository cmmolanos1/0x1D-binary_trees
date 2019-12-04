#include "binary_trees.h"
/**
 * bst_search - search a value in a BST
 * @tree: pointer to the tree
 * @value: value to be searched
 * Return: the founded node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);

	if (tree->n > value)
	{
		if (!tree->left)
			return (NULL);
		else
			return (bst_search(tree->left, value));
	}
	if (tree->n < value)
	{
		if (!tree->right)
			return (NULL);
		else
			return (bst_search(tree->right, value));
	}
	return (NULL);
}
