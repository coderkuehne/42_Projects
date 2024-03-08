/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:51:30 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/23 13:06:36 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
							Fixed();
							~Fixed();
							Fixed(const Fixed& other);
		Fixed&				operator=(const Fixed& other);
		int					getRawBits(void) const;
		void				setRawBits(int value);
	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

#endif