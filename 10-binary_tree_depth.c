#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: node type binary_tree_t
 * Return: height of a binary tree
 */

size_t recursion_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (recursion_tree_depth(tree->parent) + 1);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t result = recursion_tree_depth(tree);
    return (result - 1);
}
