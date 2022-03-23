#include "binary_trees.h"
/**
 * recursive_size - recursive function to find size
 *
 * @tree: node type binary_tree_t
 * Return: size of a binary tree
 */
size_t recursive_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursive_size(tree->left) + recursive_size(tree->right) + 1);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recursive_size(tree));
}
