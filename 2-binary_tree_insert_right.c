#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert an another in a binary tree
 * @parent: An insert the right-child in
 * @value: The value to store in the new node
 * Return: If parent is NULL
 *         Otherwise - the new node
 *
 * Description: parent has a right-child, the new node
 *              takes its place and the old right-child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
