#include "binary_trees.h"

/**
 * recursion_tree_depth - recursive function to find depth
 *
 * @tree: node type binary_tree_t
 * Return: depth of a binary tree
 */

size_t recursion_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursion_tree_depth(tree->parent) + 1);
}
/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: depth of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursion_tree_depth(tree) - 1);
}

