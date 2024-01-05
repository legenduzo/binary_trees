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
 * tree_height - measures the height of a binary tree
 * @tree: root node
 *
 * Return: height
 */

size_t tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + max(tree_height(tree->left),
				tree_height(tree->right)));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node
 *
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	h_left = tree_height(tree->left);
	h_right = tree_height(tree->right);

	return (h_left == h_right &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
