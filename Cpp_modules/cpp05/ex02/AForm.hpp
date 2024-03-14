/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:45:50 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:45:43 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
									AForm();
									AForm(const std::string &name, int gradeToSign, int gradeToExecute);
									AForm(const AForm &other);
		virtual						~AForm();
		virtual AForm				&operator=(const AForm &other);
		virtual std::string			getName() const;
		virtual bool				getSigned() const;
		virtual void				setSigned(bool isSigned);
		virtual int					getGradeToSign() const;
		virtual int					getGradeToExecute() const;
		virtual void				beSigned(const Bureaucrat &bureaucrat);
		virtual void 				execute(const Bureaucrat &executor) const = 0;
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		friend std::ostream	&operator<<(std::ostream &out, const AForm &AForm);
};

#endif