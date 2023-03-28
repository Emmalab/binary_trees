#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure its depth
 *
 * Return: 0 if null or root, or correct height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent == NULL || tree == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
