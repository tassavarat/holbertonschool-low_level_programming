#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds siblings of a node
 * @node: Pointer to node to find the sibling
 *
 * Return: Sibling of node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left && node->parent->left->n != node->n)
			return (node->parent->left);
		else if (node->parent->right && node->parent->right->n != node->n)
			return (node->parent->right);
	}
	return (NULL);
}
