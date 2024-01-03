#include "binary_trees.h"

/**
 * binary_tree_depth - tunacheki depth ya tree
 * @tree: pointer to the root node ya ile tunaangalia depth
 * Return: NULL=0 else depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
