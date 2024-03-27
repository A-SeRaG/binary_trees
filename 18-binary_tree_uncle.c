#include "binary_trees.h"

/**
 * binary_tree_uncle - Inserts a node as a left
 * @node: A pointer
 * Return: sussucceed
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node ||
	    !node->parent
	    !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node)
		return (node->parent->parent->left);
	else
		return (0);
}
