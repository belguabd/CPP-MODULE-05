/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:23:38 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/15 10:48:15 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat &other) const
{
    if (!getSign())
        throw(GradeTooLowException());
    if (other.getGrade() > getExecuteGrade())
        throw(GradeTooLowException());
    std::cout << "Informs that " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};