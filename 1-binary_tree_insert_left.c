#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - add a binary tree node in the left side
 * @parent: parent node
 * @value: integer value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if  (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->parent = parent;
	new->left = parent->left;
	parent->left = new;

	if (new->left)
		new->left->parent = new;

	return (new);
}
