#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree->left && !tree->right)
		return 0;
	if (tree->left || tree->right)
		return 1;
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
