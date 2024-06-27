//CH - 230 - A
//a12.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "fraction.h"


int main(void)
{
    Fraction first, second, product, quotient, sum, diff;
    //reading two fractions
    std::cout << "enter the numinator and denominator of fraction one: ";
    std::cin >> first;

    std::cout << "enter numerator and denominator of fraction two: ";
    std::cin >> second;
    //computing product and quotient
    product = first * second;
    quotient = first / second;
    //computing sum and difference 
    sum = first + second; 
    diff = first - second; 
    //compares to each other
    if (first > second) {
        std::cout << "the greater fraction is: " << first << std::endl;
    }
    else if (second > first) {
        std::cout << "the greater fraction is: " << second << std::endl;
    }
    else {
        std::cout << "the fractions are equal." << std::endl;
    }

    //prints on the screen
    std::cout << "here is the product: " << product << std::endl;
    std::cout << "here is the quotient: " << quotient << std::endl;
    std::cout << "here is the sum: " << sum << std::endl;
    std::cout << "here is the difference: " << diff << std::endl;


    return 0;
}