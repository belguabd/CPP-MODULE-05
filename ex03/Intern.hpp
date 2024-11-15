/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:29:50 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/14 17:53:56 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        AForm *makeForm(std::string name, std::string target);
};

#endif