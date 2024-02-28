#include "binary_trees.h"

/**
 * binary_tree_insert_right-Inserts a node as the right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node,or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the given value and parent */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If the parent has a right child, assign it to the new node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	/* Return the new node */
	return (new_node);
}
