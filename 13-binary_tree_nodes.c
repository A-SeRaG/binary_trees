#include "binary_trees.h"

/**
 * binary_tree_nodes - Inserts a node as a left
 * @tree: A pointer
 * Return: sussucceed
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		1 + binary_tree_node(tree->left) + binary_tree_node(tree->right);

	return (binary_tree_nodes(tree->left) + binary_tree_node(tree->right));
}
