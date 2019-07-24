#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree, 0 if NULL
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
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to root node of tree to measure size
 *
 * Return: Size of binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes;

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	return ((pow(2, height) - 1 == nodes));
}
