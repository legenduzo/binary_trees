#include "binary_trees.h"

/**
 * _height - internal function to calculate height
 * @tree: root node
 * @height: number to start from
 *
 * Return: height
 */

size_t _height(const binary_tree_t *tree, size_t height)
{
	if (!tree)
		return (height);

	if (_height(tree->left, height + 1) > _height(tree->right, height + 1))
		return (_height(tree->left, height + 1));
	else
		return (_height(tree->right, height + 1));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t height_l, height_r;

	if (!tree)
		return (height);

	height_l = _height(tree->left, height);
	height_r = _height(tree->right, height);

	return (height_l > height_r ? height_l : height_r);
}
