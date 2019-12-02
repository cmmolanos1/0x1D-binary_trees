#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check if node is root
 * @node: node for check if have childs
 * Return: 1 if is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
