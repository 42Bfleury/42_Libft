/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 09:06:30 by bfleury           #+#    #+#             */
/*   Updated: 2024/01/16 00:32:59 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_count_words(const char *s, char c)
{
	int		word;
	int		result;

	word = 0;
	result = 0;
	while (*s)
	{
		if (!word && *s != c)
		{
			word = 1;
			result++;
		}
		else if (word && *s == c)
			word = 0;
		s++;
	}
	return (result);
}

static int	_wordlen(const char *s, char c)
{
	int		result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		nb_word;
	int		wordlen;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	nb_word = _count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!result)
		return (NULL);
	while (nb_word--)
	{
		while (*s && *s == c)
			s++;
		wordlen = _wordlen(s, c);
		result[i] = ft_substr(s, 0, wordlen);
		if (!result[i++])
			return (NULL);
		s += wordlen;
	}
	result[i] = NULL;
	return (result);
}