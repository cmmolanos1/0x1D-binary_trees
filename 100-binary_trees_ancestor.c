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

/**
 * binary_trees_ancestor - deep of a node in a tree
 * @first: first node to compare
 * @second: second node to compare
 * Return: adonai o pastor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t depth_1 = binary_tree_depth(first);
	size_t depth_2 = binary_tree_depth(second);
	binary_tree_t *adonai = (binary_tree_t *)first;
	binary_tree_t *pastor = (binary_tree_t *)second;

	while (adonai || pastor)
	{
		if (depth_1 > depth_2)
			adonai = adonai->parent;
		else if (depth_2 > depth_1)
			pastor = pastor->parent;
		else if (depth_1 == depth_2)
		{
			if (adonai == pastor)
				return (adonai);
			if (adonai->parent == pastor)
				return (pastor);
			if (pastor->parent == adonai)
				return (adonai);
			adonai = adonai->parent;
			pastor = pastor->parent;
		}
		depth_1 = binary_tree_depth(adonai);
		depth_2 = binary_tree_depth(pastor);
	}
	return (NULL);
}
