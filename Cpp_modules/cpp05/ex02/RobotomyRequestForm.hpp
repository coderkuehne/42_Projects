/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:31:33 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/13 16:47:42 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string				_target;
	public:
								RobotomyRequestForm();
								RobotomyRequestForm(const std::string &target);
								RobotomyRequestForm(const RobotomyRequestForm &other);
								~RobotomyRequestForm();
		void 					execute(const Bureaucrat &executor) const;
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &other);
};

#endif