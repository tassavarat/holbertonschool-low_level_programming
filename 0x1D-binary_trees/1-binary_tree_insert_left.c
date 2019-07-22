#include "binary_trees.h"

/**
 * Inserts a node as the left_child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to created node, NULL on failure or if parent is NULL
 * */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (parent && new)
	{
		new->n = value;
		new->parent = parent;
		if (parent->left)
		{
			parent->left->parent = new;
			new->left = parent->left;
		}
		parent->left = new;
		return (new);
	}
	return NULL;
}
