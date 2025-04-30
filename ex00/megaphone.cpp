/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:39:25 by imatek            #+#    #+#             */
/*   Updated: 2025/04/30 14:39:31 by imatek           ###   ########.fr       */
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
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            std::cout << av[i][j];        
        }
    }
    std::cout << std::endl;
}
