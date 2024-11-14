/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:41:14 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 14:36:40 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"


class RobotomyRequestForm : public AForm
{

    public:
        void execute(Bureaucrat &other) const;
        RobotomyRequestForm(const std::string target);
    private:
        std::string target;
};

#endif