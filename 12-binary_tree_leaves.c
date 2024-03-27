#include "binary_trees.h"

/**
 * binary_tree_leaves - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int p = 0;

	if (!tree)
		return (0);

	if (tree->left)
		p += 1;
	if (tree->right)
		p += 1;
	return (p);
}
