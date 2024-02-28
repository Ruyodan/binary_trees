#include "binary_trees.h"

/**
* binary_tree_delete - Deletes an entire binary tree.
* @tree: Pointer to the root node of the tree to delete.
*
* Description: This function recursively deletes all nodes in the binary tree
* starting from the root and frees the memory allocated for each node.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* If the tree is not NULL, delete its subtrees and the root node */
	if (tree != NULL)
	{
	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);
	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);
	/* Free the memory allocated for the root node */
	free(tree);
	}
}
