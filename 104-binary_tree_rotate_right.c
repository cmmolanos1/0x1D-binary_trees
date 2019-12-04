#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_rotate_right - rotates the tree in left-way
 * @tree: root of the treee
 * Return: the root of rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	pivot = tree->left;
	/*Connect the pivot child with tree*/
	tree->left = pivot->right;
	if (tree->left)
		tree->left->parent = tree;

	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;

	return (pivot);
}
