/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:20:15 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 15:26:11 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

#include <iostream>


class PresidentialPardonForm : public AForm
{
public:
     void execute(Bureaucrat &other) const ;
    PresidentialPardonForm(std::string &terget);

private:
    std::string target;
};

#endif