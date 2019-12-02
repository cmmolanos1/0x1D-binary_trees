#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - add a binary tree node
 * @parent: parent node
 * @value: integer value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/*Assign memory*/
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	/*Assign values and point*/
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
