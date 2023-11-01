#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	/* Check if it's a leaf node (no children) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively check the left and right subtrees */
	if (tree->left)
		left_full = binary_tree_is_full(tree->left);
	if (tree->right)
		right_full = binary_tree_is_full(tree->right);

	/* A node is full if both left and right subtrees are full */
	return (left_full && right_full);
}
