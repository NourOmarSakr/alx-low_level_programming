#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result, or 0 if it can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, m, n;
	int carry = 0, sum;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (size_r <= i + 1 || size_r <= j + 1)
		return (0);

	i--;
	j--;
	k = 0;
	while (i >= 0 || j >= 0)
	{
		m = i >= 0 ? n1[i] - '0' : 0;
		n = j >= 0 ? n2[j] - '0' : 0;
		sum = m + n + carry;

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		r[k] = sum + '0';

		i--;
		j--;
		k++;
	}
	if (carry == 1)
		r[k++] = '1';
	r[k] = '\0';
	for (k--; l < k; l++, k--)
	{
		sum = r[l];
		r[l] = r[k];
		r[k] = sum;
	}
	return (r);
}
