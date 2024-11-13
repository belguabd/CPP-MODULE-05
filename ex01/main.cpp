/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:29:03 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/13 12:39:43 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    // const Form p;
    Form F("name", 2, 4);
    Bureaucrat B("HELLO" , 7);
    B.signForm(F);
}