#include "binary_trees.h"
size_t higher(size_t right, size_t left);
/**
 * binary_tree_height - function that ,easures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, high;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	high = higher(right, left)

	if (left_height > right_height)
	{
		return (left_height)
	}
	else
	{
		return (high);
	}
}

/**
 * higher - find the highest subtree
 * @rigth: right subtree
 * @left: left subtree
 * Return: the highest subtree
 */
size_t higher(size_t rigth, size_t left)
{
	if (right > left)
	{
		return (right);
	}
	else
		return (left);
}
