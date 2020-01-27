/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:18:38 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/24 06:46:15 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void				*fr_ee(char **mots, int j)
{
	while (j--)
		free(mots[j]);
	free(mots);
	return (NULL);
}

static int				word_len(const char *ptr, char c)
{
	size_t	len;

	len = 0;
	while (ptr[len] != '\0' && ptr[len] != c)
		len++;
	return (len);
}

static void				fill_word(const char *dest, const char *src, char c)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && src[index] != c)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index++;
	}
	((char *)dest)[index] = '\0';
}

static char				**f_norminette(char const *s, char c, char **ptr,
		size_t i)
{
	size_t	found;
	size_t	j;

	j = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (found == 0)
			{
				if (!(ptr[j] = (char *)malloc((word_len((s + i), c) + 1)
								* sizeof(char))))
					return (fr_ee(ptr, j));
				fill_word(ptr[j], (s + i), c);
				j++;
				found = 1;
			}
		}
		else
			found = 0;
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

char					**ft_split(char const *s, char c)
{
	char		**ptr;
	size_t		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ptr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	return (f_norminette(s, c, ptr, i));
}
