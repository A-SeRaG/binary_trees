#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Inserts a node as a left
 * @node: A pointer
 * Return: sussucceed
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || !node->left || !node->right)
		return (0);
	return (1);
}
