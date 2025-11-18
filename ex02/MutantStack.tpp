/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:00:12 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/18 13:04:52 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

MutantStack::MutantStack() : std::stack<int>() {}
MutantStack::MutantStack(const MutantStack& other) : std::stack<int>(other) {}
MutantStack& MutantStack::operator=(const MutantStack& other)
{
	if (this != &other)
	{
		std::stack<int>::operator=(other);
	}
	return *this;
}
MutantStack::~MutantStack() {}
