/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:51:53 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 15:35:19 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
    : AForm("ShrubberyCreationForm", 137, 145), target(target) {};

void ShrubberyCreationForm::execute(Bureaucrat &other) const
{
    
    if (!getSign())
        throw(AForm::GradeTooLowException());
    if (other.getGrade() > getExecuteGrade())
        throw(AForm::GradeTooLowException());

    std::fstream file(target + "_shrubbery", std::ios::out | std::ios::in | std::ios::trunc);
    if (file.is_open())
    {
        std::string tree;
        tree += "          &&& &&  & &&\n";
        tree += "      && &\\/&\\|& ()|/ @, &&\n";
        tree += "      &\\/(/&/&||/& /_/)_&/_&\n";
        tree += "   &() &\\/&|()|/&\\/ '%\" & ()\n";
        tree += "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
        tree += "&&   && & &| &| /& & % ()& /&&\n";
        tree += " ()&_---()&\\\\&\\|&&-&&--%---()~\n";
        tree += "     &&     \\\\||| \n";
        tree += "             |||\n";
        tree += "             |||\n";
        tree += "             |||\n";
        tree += "             |||\n";
        tree += "       , -=-~  .-^- _\n";
        file << tree;
        file.close();
    }   
}