#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Count of nodes with at least 1 child in the binary tree, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
	/* Check if the current node has at least one child */
	if (tree->left || tree->right)
	{
		nodes += 1;
	}
	/* Recursively count nodes with at least one child in L and R subtrees */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
