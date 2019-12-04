#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_rotate_left - rotates the tree in left-way
 * @tree: root of the treee
 * Return: the root of rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	pivot = tree->right;
	/*Connect the pivot child with tree*/
	tree->right = pivot->left;
	if (tree->right)
		tree->right->parent = tree;

	pivot->left = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;

	return (pivot);
}
