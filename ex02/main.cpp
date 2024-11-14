/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:58:22 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 16:05:42 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // try
    // {
        
        Bureaucrat B("Brahim", 1);
        std::string target = "target";
        PresidentialPardonForm R(target);
        R.beSigned(B);
        B.executeForm(R);
        

        // R.execute(B);
    // }
    // catch (AForm::GradeTooLowException &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat B("B1", 12);
    //     ShrubberyCreationForm Shru(target);
    //     Shru.execute(B);
    // }
    // catch (AForm::GradeTooLowException &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}