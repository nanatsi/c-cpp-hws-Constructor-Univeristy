//CH - 230 - A
//a10.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<iostream>
#include "Complex.h"

using namespace std;

int main() {
    double r1, i1, r2, i2;
    //reads real and imaginary parts
    cout << "Enter real part of the first complex number: ";
    cin >> r1;
    cout << endl;

    cout << "Enter imaginary part of the first complex number: ";
    cin >> i1;
    cout << endl;

    cout << "Enter real part of the second complex number: ";
    cin >> r2;
    cout << endl;

    cout << "Enter imaginary part of the second complex number: ";
    cin >> i2;
    cout << endl << endl;

    Complex c1(r1, i1), c2(r2, i2), c3, c4(c1);
    //calculates
    c3 = c1.conjugate();  
    cout << "Conjugate of the first number is ";
    c3.printi();
    cout << endl;

    c3 = c1.sum(c2);
    cout << "Sum of the entered complex numbers is ";
    c3.printi();
    cout << endl;

    c3 = c1.divide(c2);
    cout << "Difference of the entered complex numbers is ";
    c3.printi();
    cout << endl;

    c3 = c1.multiply(c2);
    cout << "Product of the entered complex numbers is ";
    c3.printi();
    return 0;
}
