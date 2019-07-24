#include "binary_trees.h"

/**
 * binary_tree_balance - Get balance factor of binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: Balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	int hl, hr;

	hl = hr = 0;
	if (tree && tree->left)
	{
		++hl;
		current = tree->left;
		while((current->left || current->right))
		{
			if (current->left)
			{
				current = current->left;
				++hl;
			}
			else
			{
				current = current->right;
				++hl;
			}
		}
	}
	if (tree && tree->right)
	{
		++hr;
		current = tree->right;
		while((current->left || current->right))
		{
			if (current->left)
			{
				current = current->left;
				++hr;
			}
			else
			{
				current = current->right;
				++hr;
			}
		}
	}
	return (hl - hr);
}
