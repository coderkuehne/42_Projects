/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:52:02 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/24 15:05:10 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
#include <iostream>
#include "Serializer.hpp"

class Data
{
	private:
	    int value_;
	public:
		Data();
	    Data(int value);
		~Data();
		Data &operator=(Data const &other);
	    int getValue() const;
		void setValue(int value);
};

#endif // !DATA_HPP