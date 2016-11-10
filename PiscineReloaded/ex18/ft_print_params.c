/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:41:25 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/02 23:19:00 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int l;

	i = 1;
	l = 0;
	while (i < argc)
	{
		while (argv[i][l] != '\0')
		{
			ft_putchar(argv[i][l]);
			l++;
		}
		ft_putchar('\n');
		l = 0;
		i++;
	}
	return (0);
}
