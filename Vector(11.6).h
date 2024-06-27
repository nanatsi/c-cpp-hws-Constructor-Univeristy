//CH - 230 - A
//a11.p6.cpp
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
    //default constructor
    Vector();
    Vector(int, double*);
    //copy constructor
    Vector(const Vector&);
    //destructor
    ~Vector();

    void print() const;
    //setter and getter methods for data
    void setSize(int);
    int getSize() const;
    void setComponents(double*);
    double* getComponents() const;
    //methods for calculating
    //norm, sum, difference, scal
    double norm();
    Vector add(const Vector&) const;
    Vector difference(const Vector&) const;
    double scal(const Vector&) const;

private:
    double* component;
    int size;



};
#endif
