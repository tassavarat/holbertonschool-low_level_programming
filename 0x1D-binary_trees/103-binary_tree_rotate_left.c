#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate binary tree to the left
 * @tree: Pointer to root of tree
 *
 * Return: Pointer to new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;

	if (tree && tree->right)
	{
		tmp = tree->right->left;
		tree->right->left = tree;
		tree->right->parent = NULL;
		tree->parent = tree->right;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;
		tree = tree->parent;
	}
	return (tree);
}
