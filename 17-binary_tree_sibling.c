#include "binary_trees.h"

/**
 * binary_tree_sibling - Inserts a node as a left
 * @node: A pointer
 * Return: sussucceed
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par = node->parent;

	if (!node || !node->parent)
		return (NULL);

	if (par->left == node)
		return (par->right);
	else if (par->right == node)
		return (par->left);
	else
		return (NULL);
}
