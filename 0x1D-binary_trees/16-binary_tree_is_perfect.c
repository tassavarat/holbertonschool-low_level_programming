#include "binary_trees.h"

/**
 * _pow_recursion - Calculate x raised to the power of y
 * @x: Base
 * @y: Exponent
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

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

/**
 * binary_tree_is_perfect - Determine if binary tree is perfect
 * @tree: Pointer to root of tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, target, height;

	height = binary_tree_height(tree) + 1;
	nodes = binary_tree_size(tree);
	target = _pow_recursion(2, height);
	return (target - 1 == nodes);
}
