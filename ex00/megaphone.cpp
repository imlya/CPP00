/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:39:25 by imatek            #+#    #+#             */
/*   Updated: 2025/05/03 12:29:23 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j] ; j++)
        {
			// est-ce possible d'utiliser std::locale.toupper ?
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            std::cout << av[i][j];
        }
    }
    std::cout << std::endl;
}
