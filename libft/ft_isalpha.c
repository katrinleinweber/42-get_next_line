/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:44:33 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 20:57:59 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
