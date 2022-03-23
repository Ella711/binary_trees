#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;

	return ((left_height > right_height) ? left_height : right_height);
}
/**
 * binary_tree_balance - measures the height of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = binary_tree_height(tree->left);
	else
		height_left = -1;

	if (tree->right)
		height_right = binary_tree_height(tree->right);
	else
		height_right = -1;

	return (height_left - height_right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: node type binary_tree_t
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfection = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
		perfection = binary_tree_balance(tree);
	else
		return (0);

	if (perfection == 0)
		return (1);
	return (0);
}

