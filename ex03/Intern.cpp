/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:28:59 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/27 09:36:00 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm *Intern::makeForm(std::string name, std::string target)
{

    std::string names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i = (((names[0] == name) * 0) + ((names[1] == name) * 1) + ((names[2] == name) * 2));
    
    switch (i)
    {
        case 0:
            std::cout << "Intern creates PresidentialPardonForm" << std::endl;
            return new PresidentialPardonForm(target);
        case 1:
            std::cout << "Intern creates RobotomyRequestForm" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
            return new ShrubberyCreationForm(target);
        default:
            std::cout << "Error: this form doesn't exist" << std::endl;
    }
    return (NULL);
}