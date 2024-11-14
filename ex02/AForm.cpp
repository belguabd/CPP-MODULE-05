/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:39:59 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/13 13:53:39 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*start Orthodox Canonical AForm*/

// AForm::AForm() : name("default"), executeGrade(1), signGrade(1), is_sign(true) {};

// // AForm::AForm(const AForm &other)
// // {
// //     name = other.name;
// //     is_sign = other.is_sign;
// // }

// AForm &AForm::operator=(const AForm &other)
// {
//     if (this == &other)
//         return (*this);
//     name = other.name;
//     is_sign = other.is_sign;
//     return (*this);
// }

// AForm::~AForm() {};

/*end Orthodox Canonical AForm*/

AForm::AForm(std::string name, int executeGrade, int signGrade)
    : name(name), executeGrade(executeGrade), signGrade(signGrade)
{
    if (executeGrade < 1 || signGrade < 1)
        throw(GradeTooHighException());
    else if (executeGrade > 150 || signGrade > 150)
        throw(GradeTooLowException());
};

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

std::string AForm::getName() const { return this->name; }

int AForm::getExecuteGrade() const { return this->executeGrade; }

int AForm::getSignGrade() const { return this->signGrade; }

bool AForm::getSign() const { return this->is_sign; }

void AForm::beSigned(Bureaucrat &other) 
{
    if (other.getGrade() > signGrade)
        throw(GradeTooLowException());
    this->is_sign = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << "Name: " << obj.getName()
        << ", Execute grade: " << obj.getExecuteGrade()
        << ", Sign grade: " << obj.getSignGrade()
        << ", Is signed: " << (obj.getSignGrade() ? "Yes" : "No");
    return out;
}