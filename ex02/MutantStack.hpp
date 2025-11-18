/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:00:04 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/18 13:07:20 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class MutantStack : public std::stack<int>
{
	public:
		MutantStack() : std::stack<int>();
		MutantStack(const MutantStack& other) : std::stack<int>(other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();
};
