#include "binary_trees.h"

/**
 * _binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to node to measure depth
 *
 * Return: Depth of binary tree, 0 if NULL
 */
int _binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + _binary_tree_depth(tree->parent) : 0);
}

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes
 * @first: Pointer to first node
 * @second: Pointer to second node
 *
 * Return: Pointer to lowest common ancestor node of two given nodes
 * NULL if no common ancestor found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *current_f, *current_s;
	int diff;

	if (!first || !second)
		return (NULL);
	diff = _binary_tree_depth(first) - _binary_tree_depth(second);
	current_f = (binary_tree_t *)first;
	current_s = (binary_tree_t *)second;

	while (diff < 0)
	{
		current_s = current_s->parent;
		++diff;
	}
	while (diff)
	{
		current_f = current_f->parent;
		--diff;
	}
	while (current_f && current_s)
	{
		if (current_f == current_s)
			return (current_f);
		current_f = current_f->parent;
		current_s = current_s->parent;
	}
	return (NULL);
}
