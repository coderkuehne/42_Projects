/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:17:05 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/13 16:47:39 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string				_target;
	public:
								ShrubberyCreationForm();
								ShrubberyCreationForm(const std::string &target);
								ShrubberyCreationForm(const ShrubberyCreationForm &other);
								~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
		void 					execute(const Bureaucrat &executor) const;
};

#endif