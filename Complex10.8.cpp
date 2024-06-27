//CH - 230 - A
//a10.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;
//default constructor
Complex::Complex() : real(0), imag(0) {}
//parameterized constructor
Complex::Complex(double a, double b) : real(a), imag(b) {}
//copy constructor
Complex::Complex(const Complex& k) : real(k.real), imag(k.imag) {}
//destructor
Complex::~Complex() {
   cout << "Executing destructor" << endl;
}

//setter and getter for real and imaginary part
void Complex::setReal(double a) {
    real = a;
}

void Complex::setImag(double b) {
    imag = b;
}

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}
//print func
void Complex::printi() const {
    if (real == 0) {
        if (imag > 0) {
            cout << imag << "i" << endl;
        }
        else if (imag < 0) {
            cout << imag << "i" << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else {
        if (imag > 0) {
            cout << real << "+" << imag << "i" << endl;
        }
        else if (imag < 0) {
            cout << real << imag << "i" << endl;
        }
        else {
            cout << real << endl;
        }
    }
}
//funcs to calculate
Complex Complex::sum(const Complex& k) const {
    Complex result(real + k.real, imag + k.imag);
    return result;
}

Complex Complex::divide(const Complex& k) const {
    Complex result(real - k.real, imag - k.imag);
    return result;
}

Complex Complex::conjugate() const {
    Complex result(real, -imag);  // Corrected: Create a new complex number
    return result;
}

Complex Complex::multiply(const Complex& k) const {
    double a = k.real, b = k.imag;
    Complex result(real * a - imag * b, real * b + imag * a);
    return result;
}
