#include "binary_trees.h"
/**
 * max - max number
 *
 * @num1: number one
 * @num2: number two
 * Return: max number
 */
int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}

/**
 * recursive_height - measures the height of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: height of a binary tree
 */
size_t recursive_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (max(recursive_height(tree->left), recursive_height(tree->right) + 1));
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (recursive_height(tree) - 1);
}
