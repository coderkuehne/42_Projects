/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:25:36 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/24 17:32:32 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T  max(T &a, T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T min(T &a, T &b)
{
	return (a < b ? a : b);
}

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a: " << a << " b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;

	return (0);
}