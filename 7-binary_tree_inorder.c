#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function applies func to each node in in-order.
 * The value in each node is passed as a parameter to the function.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);	/* Recurse on the left subtree */
	func(tree->n);				/* Apply the function to the current node */
	binary_tree_inorder(tree->right, func);	/* Recurse on the right subtree */
}
