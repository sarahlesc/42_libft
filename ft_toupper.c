/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:38:36 by lea               #+#    #+#             */
/*   Updated: 2020/09/09 16:58:05 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	char final;
	if (c >= 'a' && c <= 'z')
	{
		final = c - 32;
		return (final);
	}
	return (c);
}