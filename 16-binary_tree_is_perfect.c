#include "binary_trees.h"

/**
 * binary_tree_nodes - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!tree->left && tree->right)
        return (0);
    if (tree->left && !tree->right)
        return (0);

    return (1);
}
