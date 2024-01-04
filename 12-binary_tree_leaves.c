#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves
 * @tree: root node
 *
 * Return: number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
