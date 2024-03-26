#include "binary_trees.h"

/**
 * binary_tree_height - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_left, counter_right;

	if (tree)
	{
		counter_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		counter_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((counter_left > counter_right) ? counter_left : counter_right);
	}
	return (0);
}
