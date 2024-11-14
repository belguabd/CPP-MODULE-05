/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:16:06 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 15:36:16 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("RobotomyRequestForm", 45, 72), target(target) {}

void RobotomyRequestForm::execute(Bureaucrat &other) const
{   
    if (!getSign())
        throw(AForm::GradeTooLowException());
    if (other.getGrade() > getExecuteGrade())
        throw(AForm::GradeTooLowException());

    std::srand(std::time(0));

    int nbr_randome = rand() % 2;
    std::cout << (nbr_randome ? target + " has been robotomized successfully 50% of the time\n" : "informs that the robotomy failed\n");
}
