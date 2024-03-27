#include "binary_trees.h"

/**
 * binary_tree_balance - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}


/**
 * height - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

int height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + height(tree->left) : 0;
	height_right = tree->right ? 1 + height(tree->right) : 0;
	return ((height_left > height_right) ? height_left : height_right);
}
