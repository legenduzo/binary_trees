#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: root node
 *
 * Return: number
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return(0);

	return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}
