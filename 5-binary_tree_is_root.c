#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: the node to check
 *
 * Return: 1 if root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
