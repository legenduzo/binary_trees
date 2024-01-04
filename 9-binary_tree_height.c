#include "binary_trees.h"

/**
 * max - returns max of a, b
 * @a: fist element
 * @b: second element
 *
 * Return: max
 */

size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 + max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));
}
