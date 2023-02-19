/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randy_the_randomizer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:59:14 by mflury            #+#    #+#             */
/*   Updated: 2023/02/19 13:59:14 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// set the seed of randomness based on time(0), then use rand() to pick a number set between 1 and argc.

int	ft_randy(int argc)
{
	srand((unsigned int)time(0));

	int r = (rand() % (argc - 1)) + 1; // -1 so we dont have the prog name, +1 so 0 isnt possible.
	return(r);
}

// 

int	main(int argc, char **argv)
{
	int r = 0; // index to randomize to make argv[r] later.

	if(argc <= 2) // verify if there is a choice to make, insult you if you dont understand whats a choice.
	{
		printf("\nu stupid ?!\n\n"); // yes i could have put a helper... but no.
		return (1);
	}
	while (r < 1)
	{
		r = ft_randy(argc); // give to randy the max int, he will return a random number between 1 and argc.
	}
	printf("\n%s\n\n", argv[r]); // print the corresponding arg
	return (0);
}