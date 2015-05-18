/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:19:55 by abellion          #+#    #+#             */
/*   Updated: 2014/12/10 23:04:03 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				index;

	if (!s)
		return (0);
	index = ft_strlen(s);
	while (!ft_strchr(&s[index], c) && index + 1)
		index--;
	return ((index >= 0) ? (char *)&s[index] : 0);
}
