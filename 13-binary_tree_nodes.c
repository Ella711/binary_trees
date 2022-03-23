#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: tree type binary_tree_t
 * Return: at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result = 0;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right)
	 || (tree->left && tree->right))
		result++;

	return (result += (binary_tree_nodes(tree->left)
	 + binary_tree_nodes(tree->right)));
}
