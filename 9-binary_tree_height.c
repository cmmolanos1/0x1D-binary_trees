#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
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
