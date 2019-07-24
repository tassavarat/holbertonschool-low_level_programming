#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to node to measure depth
 *
 * Return: Depth of binary tree, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
