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

/**
 * check_left_sib - Check children of right child's sibling
 * @right_sib: Pointer to right sibling
 *
 * Return: 0 if sibling only has a left child, 1 otherwise
 */
int check_left_sib(binary_tree_t *right_sib)
{
	binary_tree_t *left_sib = binary_tree_sibling(right_sib);

	if (right_sib->left || right_sib->right)
	{
		if (left_sib->left && !left_sib->right)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_complete - Check if binary tree is complete
 * @tree: Pointer to root of binary tree
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && tree->right))
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && !tree->right)
		return (binary_tree_is_complete(tree->left));
	return (binary_tree_is_complete(tree->left) &&
			(binary_tree_is_complete(tree->right) &&
			check_left_sib(tree->right)));
}
