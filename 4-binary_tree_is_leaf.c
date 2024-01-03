#include "binary_trees.h"

/**
 * binary_tree_is_leaf - inacheck kama ni node au zi
 * @node: node ile inaangaliwa
 * Return: kama ni matawi -1 else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
