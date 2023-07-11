#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, w, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = 0;
	for (i = 0; str[i]; i++)
		w += (str[i] != ' ' && (i == 0 || str[i - 1] == ' '));
	if (w == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (w + 1));
	if (tab == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < w)
	{
		while (str[j] == ' ')
			j++;
		len = 0;
		while (str[j + len] != ' ' && str[j + len])
			len++;
		tab[i] = malloc(sizeof(char) * (len + 1));
		if (tab[i] == NULL)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			tab[i][k] = str[j++];
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = NULL;

	return (tab);
}
