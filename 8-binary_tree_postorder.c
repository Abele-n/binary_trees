#include "binary_trees.h"

/**
 * binary_tree_postorder - to print elements of tree using postorder traversal
 * @tree: tree to go through
 * @func: function in use
 * Return: Null
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
