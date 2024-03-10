/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:45:50 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:45:43 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
							Form();
							Form(const std::string &name, int gradeToSign, int gradeToExecute);
							Form(const Form &other);
							~Form();
		Form				&operator=(const Form &other);
		std::string			getName() const;
		bool				getSigned() const;
		void				setSigned(bool isSigned);
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(const Bureaucrat &bureaucrat);
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
		friend std::ostream	&operator<<(std::ostream &out, const Form &form);
};

#endif