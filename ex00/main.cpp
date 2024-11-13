#include <iostream>

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat B("Brahim" , 1);
        //
        B.incrementGrade();
    }
    catch (std::exception &e)
    {
        throw ;
        // std::cout << e.what() << std::endl;
    }
}
