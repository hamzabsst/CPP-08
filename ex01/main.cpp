/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:42:21 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/18 14:22:35 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	std::cout << "\nSubject test:" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}


	std::cout << "\n10,000 numbers test:" << std::endl;
	{
		Span sp(10000);
		std::vector<int> largeVec;

		for (int i = 0; i < 10000; i++)
		{
			largeVec.push_back(std::rand());
		}
		sp.addNumber(largeVec.begin(), largeVec.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}

	return 0;
}
