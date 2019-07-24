#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree, -1 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - Get balance factor of binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: Balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l - height_r);
}

/**
 * binary_tree_is_full - Check if binary tree is full
 * @tree: Pointer to root of binary tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	return (height_l == height_r);
}
/**
 * binary_tree_is_perfect - Determine whether or not binary tree is perfect
 * @tree: Pointer to root of binary tree
 *
 * Return: 1 if binary tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bif, fl, fr;

	if (!tree)
		return (0);

	bif = binary_tree_balance(tree);
	fl = binary_tree_is_full(tree->left);
	fr = binary_tree_is_full(tree->right);
	return (!bif && fl == fr);
}
