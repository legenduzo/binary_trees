#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node
 * @tree: root node
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
