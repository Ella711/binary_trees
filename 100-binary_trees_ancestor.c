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
/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 *
 * @tree: node type binary_tree_t
 * Return: lowest common ancestor of two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first->parent || !second->parent || !second || !first)
        return (NULL);

    if (first->parent == second->parent || second == first->parent)
        return (first->parent);
    if (first == second->parent)
        return (second->parent);
    else if (binary_tree_depth(first) >= binary_tree_depth(second))
        binary_trees_ancestor(first->parent, second);
    else
        binary_trees_ancestor(first, second->parent);
    return(first->parent);
}