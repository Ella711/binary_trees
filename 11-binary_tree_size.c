#include "binary_trees.h"

size_t recursive_size(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return recursive_size(tree->left) + recursive_size(tree->right) + 1;
}
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return(0);

    return (recursive_size(tree));
}