#include "binary_trees.h"

/**
 * binary_tree_preorder - Inserts a node as a left
 * @tree: A pointer
 * @func: A function
 * Return: sussucceed
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
