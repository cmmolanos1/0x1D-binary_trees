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
	binary_tree_t *right_node;

	if  (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->left = NULL;
	right_node->parent = parent;
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
