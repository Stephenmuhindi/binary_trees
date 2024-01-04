#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
int checker(const binary_tree_t *tree, size_t index, size_t size);
int binary_tree_is_complete(const binary_tree_t *tree);

/**
 * binary_tree_size - returns size
 * @tree: the rootnode pointer
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * checker - check completeness
 * @tree: the rootnode pointer
 * @index: index of node
 * @size: size
 * Return: complete=1 else 0
 */
int checker(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (checker(tree->left, index * 2 + 1, size) &&
		checker(tree->right, index * 2 + 2, size));
}

/**
 * binary_tree_is_complete - checks 4 completeness
 * @tree: root to the tree node
 * Return: complete=1 else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index, size;

	if (tree == NULL)
		return (0);
	index = 0;
	size = binary_tree_size(tree);
	return (checker(tree, index, size));
}
