/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeseol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:14:41 by yeseol            #+#    #+#             */
/*   Updated: 2020/11/21 13:06:36 by yeseol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y) {

	int row;
	int col;
	int flag;

	row = 1;
	while(row <= y)
	{ 
		col = 1;
		while(col <= x)
		{
			flag = (col == 1) || (col == x);
			if(flag)	ft_putchar('o');
			else	ft_putchar('|');
			col++;
		}
		ft_putchar('\n');
		row++;
	}

}

