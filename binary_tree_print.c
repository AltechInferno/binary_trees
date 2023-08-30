#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * _height - This measures the height of a binary tree
 *
 * @tree: This is a pointer to the node to measures the height
 *
 * Return: height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t h_right;
	size_t h_left;

	h_right = tree->right ? 1 + _height(tree->right) : 0;
	h_left = tree->left ? 1 + _height(tree->left) : 0;
	return (h_right > h_left ? h_right : h_left);
}


/**
 * print_t - this stores recursively each level in an array of strings
 *
 * @tree: the pointer to the node to print
 * @offset: the offset to print
 * @depth: the depth of the node
 * @s: Buffer
 *
 * Return: the length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	if (!tree)
		return (0);

	int width = snprintf(&s[depth][offset], 7, "(%03d)", tree->n);
	int left = print_t(tree->left, offset, depth + 1, s);
	int right = print_t(tree->right, offset + left + width, depth + 1, s);

	if (depth > 0)
	{
		int is_left = (tree->parent && tree->parent->left == tree);
		int i;

		int start = offset + (is_left ? left : -width / 2);
		int end = start + width + (is_left ? right : left);

		for (i = start; i < end; i++)
			s[depth - 1][i] = '-';
		s[depth - 1][start + (end - start) / 2] = '.';
	}

	return (left + width + right);
}


/**
 * binary_tree_print - This prints a binary tree
 *
 * @tree: the pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;

	size_t height = _height(tree);
	char **s = malloc(sizeof(*s) * (height + 1));

	if (!s)
		return;

	for (size_t i = 0; i < height + 1; i++)
	{
		s[i] = calloc(255, sizeof(**s));
		if (!s[i])
		{
			for (size_t j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return;
		}
	}

	print_t(tree, 0, 0, s);

	for (size_t i = 0; i < height + 1; i++)
	{
		size_t j = 254;

		while (j > 1 && s[i][j] == ' ')
		{
			s[i][j] = '\0';
			j--;
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}

	free(s);
}

