#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node
 * Return: if perfect 1, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == (1 << height) - 1);
}
/**
 * binary_tree_size - measures the size
 * @tree: pointer to root node
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height amount
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (right > left)
		return (right);
	else
		return (left);
}
