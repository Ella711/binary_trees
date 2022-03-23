#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: node type binary_tree_t
 * Return: sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int self = node->n;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left && node->parent->left->n == self)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
