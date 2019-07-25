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
	return ((binary_tree_balance(tree) >= 0) &&
			binary_tree_is_complete(tree->left) &&
			(binary_tree_is_complete(tree->right) &&
			check_left_sib(tree->right)));
}
