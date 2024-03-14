/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:33:07 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/14 11:22:08 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string				_target;
	public:
								PresidentialPardonForm();
								PresidentialPardonForm(const std::string &target);
								PresidentialPardonForm(const PresidentialPardonForm &other);
								~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
		void 					execute(const Bureaucrat &executor) const;
};

#endif
