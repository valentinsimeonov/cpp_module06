/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ident.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:19:44 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/17 20:22:08 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif