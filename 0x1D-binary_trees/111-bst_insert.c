#include "binary_trees.h"

/**
 * lt - Checks left pointers to determine insert position
 * @new: Double pointer to new
 * @current: Double pointer to pointer to tree
 * @value: to insert
 *
 * Return: 1 on success, 0 on failure, 2 if duplicate found, 3 on malloc fail
 */
int lt(bst_t **new, bst_t **current, int value)
{
	if ((*current)->left && value == (*current)->left->n)
		return (2);

	while (*current && value < (*current)->n)
	{
		if (!(*current)->left)
		{
			(*new) = binary_tree_node(*current, value);
			if (!*new)
				return (3);
			(*current)->left = *new;
			return (1);
		}
		*current = (*current)->left;
	}
	return (0);
}

/**
 * gt - Checks left pointers to determine insert position
 * @new: Double pointer to new
 * @current: Double pointer to pointer to tree
 * @value: to insert
 *
 * Return: 1 on success, 0 on failure, 2 if duplicate found, 3 on malloc fail
 */
int gt(bst_t **new, bst_t **current, int value)
{
	if ((*current)->right && value == (*current)->right->n)
		return (2);

	while (*current && value > (*current)->n)
	{
		if (!(*current)->right)
		{
			*new = binary_tree_node(*current, value);
			if (!*new)
				return (3);
			(*current)->right = *new;
			return (1);
		}
		*current = (*current)->right;
	}
	return (0);
}

/**
 * bst_insert - Inserts a value in a BST
 * @tree: Double pointer to root node of BST to insert value
 * @value: Value to store the node being inserted
 *
 * Return: Pointer to created node, NULL on failure
 * If tree address is NULL, created node becomes root
 * If value already present then ignore
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *current;
	int ret;

	if (!tree)
		return (NULL);
	current = NULL;
	if (!*tree)
	{
		new = binary_tree_node(*tree, value);
		if (!new)
			return (NULL);
		*tree = new;
	}
	else
	{
		current = *tree;
		while (1)
		{
			ret = lt(&new, &current, value);
			if (ret == 1)
				break;
			else if (ret == 2 || ret == 3)
				return (NULL);
			ret = gt(&new, &current, value);
			if (ret == 1)
				break;
			else if (ret == 2 || ret == 3)
				return (NULL);
		}
	}
	return (new);
}
