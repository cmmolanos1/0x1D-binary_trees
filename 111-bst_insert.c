#include "binary_trees.h"
/**
 * bst_insert - insert nodes in a binary tree
 * @tree: root of tree
 * @value: value of node
 * Return: inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left)
			return (bst_insert(&((*tree)->left), value));

		(*tree)->left = binary_tree_node(*tree, value);
		return ((*tree)->left);
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right)
			return (bst_insert(&((*tree)->right), value));

		(*tree)->right = binary_tree_node(*tree, value);
		return ((*tree)->right);
	}
	return (NULL);
}
