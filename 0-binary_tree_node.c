#include "binary_trees.h"
/**
 * @file 0-binary_tree_node.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-22
 *
 * @copyright Copyright (c) 2022
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;
    return (new_node);
}