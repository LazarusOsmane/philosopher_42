/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christellenkouka <christellenkouka@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:20:22 by engooh            #+#    #+#             */
/*   Updated: 2022/05/28 19:11:22 by christellen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (!init_philo(&data, ac, av))
		return (0);
	wait_philo(&data, data.philo, -1);
	destroy_philo(&data, data.philo, -1);
	return (0);
}
