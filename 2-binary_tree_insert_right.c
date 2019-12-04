#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - add a binary tree node in the right side
 * @parent: parent node
 * @value: integer value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if  (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->parent = parent;
	new->right = parent->right;
	parent->right = new;

	if (new->right)
		new->right->parent = new;

	return (new);
}
