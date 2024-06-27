//CH - 230 - A
//a10.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex {
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double a, double b);
    Complex(const Complex& k);
    ~Complex();

    void setReal(double a);
    void setImag(double b);

    double getReal() const;
    double getImag() const;

    void printi() const;

    Complex sum(const Complex& k) const;
    Complex divide(const Complex& k) const;
    Complex conjugate() const;
    Complex multiply(const Complex& k) const;
};

#endif
