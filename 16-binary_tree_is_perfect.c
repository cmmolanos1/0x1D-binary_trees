#include "binary_trees.h"
#include <math.h>
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
/**
 * binary_tree_size - size of the tree
 * @tree: root of the treee
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: root of the treee
 * Return: 1 if is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t sais = binary_tree_size(tree);

	size_t  power = 1, i = 0;

	while (i < height + 1)
	{
		power = power * 2;
		i++;
	}
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((power - 1) == sais)
		return (1);

	return (0);
}
