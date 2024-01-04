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
 * height - measures the height of a binary tree
 * @tree: root node
 *
 * Return: height
 */

size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + max(height(tree->left),
				height(tree->right)));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 *
 * Return: number
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)height(tree->left) - (int)height(tree->right));
}
