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
 * visit_level - Visit all nodes of a given level in a binary tree
 * @tree: Pointer to root of tree
 * @level: Tree level
 * @func: Visiting function
 *
 * Return: N/A
 */
void visit_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		visit_level(tree->left, level - 1, func);
		visit_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Traverse binary tree by level
 * @tree: Pointer to root of binary tree
 * @func: Visiting function
 *
 * Return: N/A
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height;
	int i;

	if (tree && func)
	{
		height = binary_tree_height(tree) + 2;

		for (i = 0; i < height; i++)
		{
			visit_level(tree, i, func);
		}
	}
}
