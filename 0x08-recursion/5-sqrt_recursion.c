#include "main.h"
/**
  *find_sqrt - finds the natural square root of a number
  *@num: the squared number
  *@root: the root to be tested
  *Return: returns the square root or -1 if not found
  */
int find_sqrt(int num, int root);
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: the squared number
  *Return: returns the natural square root if applicable
  */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
