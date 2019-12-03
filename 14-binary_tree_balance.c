#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - height of the tree
 * @tree: root of the treee
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_r;
	size_t count_l;

	if (tree == NULL)
		return (0);

	if (tree->right)
		count_r = binary_tree_height(tree->right) + 1;
	else
		count_r = 0;
	if (tree->left)
		count_l = binary_tree_height(tree->left) + 1;
	else
		count_l = 0;

	if (count_l > count_r)
		return (count_l);
	else
		return (count_r);
}

/**
 * binary_tree_balance - calculates balance index of a tree
 * @tree: root of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		hleft = 1 + binary_tree_height(tree->left);

	if (tree->right)
		hright = 1 + binary_tree_height(tree->right);

	return (hleft - hright);
}
