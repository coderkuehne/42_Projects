/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:03:33 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:36:56 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string			_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int grade);
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
};

#endif