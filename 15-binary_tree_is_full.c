#include "binary_trees.h"

/**
 * is_full_recursive - tunacheki kana tree ni full recursively
 * @tree: pointer ya root node ya tree tunacheki
 * Return: full = 1 else 0
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks ka tree iko full
 * @tree: pointer ya root node ya tree tunacheki
 *
 * Return: NULL or not full = 0 else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
