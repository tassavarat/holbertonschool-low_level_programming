#include "binary_trees.h"

/**
 * binary_tree_leaves - Count number of leaves in binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: Number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_full - Check if binary tree is full
 * @tree: Pointer to root of binary tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_height, r_height, l_leaves, r_leaves;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;

	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);
	return ((l_height == r_height) && (l_leaves == r_leaves));
}
