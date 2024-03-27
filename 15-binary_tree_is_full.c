#include "binary_trees.h"

/**
 * binary_tree_is_full - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
		return (1);
}
