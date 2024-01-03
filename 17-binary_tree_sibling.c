#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling a binary tree
 * @node: The node to find the sibling
 * Return: If node is NULL , no sibling - NULL
 *         Otherwise - a pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
