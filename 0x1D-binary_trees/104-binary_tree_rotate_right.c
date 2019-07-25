#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotate binary tree to the right
 * @tree: Pointer to root of tree
 *
 * Return: Pointer to new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;

	if (tree && tree->left)
	{
		tmp = tree->left->right;
		tree->left->right = tree;
		tree->left->parent = NULL;
		tree->parent = tree->left;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;
		tree = tree->parent;
	}
	return (tree);
}
