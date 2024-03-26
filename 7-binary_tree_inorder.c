#include "binary_trees.h"

/**
 * binary_tree_preorder - Inserts a node as a left
 * @tree: A pointer
 * @func: A function
 * Return: sussucceed
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n)
		binary_tree_preorder(tree->right, func);
	}
}
