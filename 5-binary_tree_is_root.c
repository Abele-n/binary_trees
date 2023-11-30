#include "binary_trees.h"

/**
 * binary_tree_is_root - the function that checks whether a node is a root
 * @node: Node to check
 * Return: 0 if is not a root 1 when a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
