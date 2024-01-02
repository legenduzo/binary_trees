#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
		node->right = NULL;

	parent->right = node;
	node->parent = parent;
	node->n = value;
	node->left = NULL;

	return (node);
}
