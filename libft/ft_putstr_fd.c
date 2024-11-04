/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:29:20 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 20:35:09 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
// int main()
// {
//     char *str = "alsdgfksa";
//     ft_putstr_fd(str, 1);
//     return 0;
// }

