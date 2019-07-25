#include "binary_trees.h"

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
	const binary_tree_t *node;

	if (!first || !second)
		return (NULL);

	if (first->n < second->n)
		node = first;
	else
		node = second;
	return (node->parent);
}