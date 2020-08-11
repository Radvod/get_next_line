/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgalazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:07:52 by hgalazza          #+#    #+#             */
/*   Updated: 2019/09/16 16:32:09 by hgalazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 3

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# include "./libft/libft.h"

int			get_next_line(const int fd, char **line);

#endif
