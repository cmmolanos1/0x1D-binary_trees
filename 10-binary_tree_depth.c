#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - deep of a node in a tree
 * @tree: root of the treee
 * Return: the deep
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count_p;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count_p = binary_tree_depth(tree->parent) + 1;
	else
		count_p = 0;
	return (count_p);
}
