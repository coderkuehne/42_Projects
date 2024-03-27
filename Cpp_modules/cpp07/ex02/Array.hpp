/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:42:13 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/27 17:08:37 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>
# include <exception>

template<typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;
	public:
		Array() : _array(NULL), _size(0)
		{
			std::cout << "Default constructor called" << std::endl;
		}
		Array(unsigned int n)  : _array(new T[n]), _size(n)
		{
			std::cout << "Parametric constructor called" << std::endl;
		}
		Array(const Array& src)
		{
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		}
		~Array()
		{
			std::cout << "Destructor called" << std::endl;
			delete[] _array;
		}

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Out of range");
				}
		};

		Array& operator=(const Array &src)
		{
			std::cout << "Assignation operator called" << std::endl;
			if (this != &src)
			{
				if (_array)
					delete[] _array;
				_size = src._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = src._array[i];
			}
			return (*this);
		}
		T& operator[](unsigned int i)
		{
			if (i >= _size)
				throw Array<T>::OutOfRangeException();
			return (_array[i]);
		}
		
		unsigned int size() const
		{
			return (_size);
		}
};

#endif