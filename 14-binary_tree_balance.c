#include "binary_trees.h"
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

    return ((right_height > left_height) ? right_height : left_height);
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}