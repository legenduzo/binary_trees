#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
		node->left = NULL;

	parent->left = node;
	node->parent = parent;
	node->n = value;
	node->right = NULL;

	return (node);
}
