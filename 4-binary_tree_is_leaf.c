#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Inserts a node as a left
 * @node: A pointer
 * Return: sussucceed
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (1);
	else
		return (0);
}
