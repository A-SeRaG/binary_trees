#include "binary_trees.h"

/**
 * binary_tree_is_root - Inserts a node as a left
 * @node: A pointer
 * Return: sussucceed
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	else
		return (1);
}
