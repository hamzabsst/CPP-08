/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:42:34 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/18 12:58:05 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_maxSize(0), _numbers(){}
Span::Span(unsigned int n):_maxSize(n), _numbers(){}

Span::Span(const Span& other)
{
	_maxSize = other._maxSize;
	_numbers = other._numbers;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span(){}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::out_of_range("span is full");
	_numbers.push_back(number);
}

int		Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::logic_error("not enough numbers to find a span");

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = INT_MAX;
	for (size_t i = 1; i < sorted.size(); i++)
	{
		int diff = sorted[i] - sorted[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

int		Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::logic_error("not enough numbers to find a span");

	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());

	return max - min;
}
