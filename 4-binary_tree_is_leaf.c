#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 *
 * Return: 1 if true, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
