#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the treeto check
 * Return: if tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);

	return (binary_tree_is_full(tree) && (1 << (height + 1))
			- 1 == binary_tree_size(tree));
}
