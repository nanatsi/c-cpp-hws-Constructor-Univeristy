//CH - 230 - A
//a12.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "fraction.h"


int main(void)
{
    Fraction first, second, product, quotient;
    //reading two fractions
    std::cout << "please enter the numinator and denominator of fraction one: ";
    std::cin >> first;

    std::cout << "please enter numerator and denominator of fraction two: ";
    std::cin >> second;
    //computing product and quotient
    product = first * second;
    quotient = first / second;
    //prints on the screen
    std::cout << "here is the product: " << product << std::endl;
    std::cout << "here is the quotient: " << quotient << std::endl;

    return 0;
}