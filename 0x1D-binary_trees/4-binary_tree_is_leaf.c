#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to node being checked
 *
 * Return: 1 if leaf, otherwise 0 if not or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
