//CH - 230 - A
//a11.p6.cpp
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
#include <cmath> 
#include "Vector.h"

using namespace std;

Vector::Vector() {
    size = 0;
    component = 0;
}

Vector::Vector(int nsize, double* ncomponent) {
    int i;
    size = nsize;
    //allocates memory
    component = new double[size]; 
    for (i = 0; i < size; i++) 
        component[i] = ncomponent[i];   
}
//copy constructor
Vector::Vector(const Vector& copyV) : size(copyV.size) {
    component = new double[size]; 
    for (int i = 0; i < size; i++) 
        component[i] = copyV.component[i];   
}
//destructor
Vector::~Vector() {
    //deallocation
    delete[] component;
    cout << "this is a destructor\n";
}
//sets and gets data
void Vector::setSize(int nsize) {
    size = nsize;
}

void Vector::setComponents(double* ncomponent) {
    for (int i = 0; i < size; i++) 
        component[i] = ncomponent[i];   
}

int Vector::getSize() const{
    return size;
}

double* Vector::getComponents() const{
    return component;
}
//methods for printing and required computations
void Vector::print() const{
    cout << "(";
    for (int i = 0; i < size; i++) 
        cout << component[i] << ", ";
    cout << ")" << endl;
}

double Vector::norm() {
    double k = 0;
    for (int i = 0; i < size; i++)
        k += component[i] * component[i];
    return pow(k,  (0.5));
}

Vector Vector::add(const Vector& V) const {
    Vector V1(V);
    for (int i = 0; i < size; i++) 
        V1.component[i] += component[i]; 
    return V1;
}

Vector Vector::difference(const Vector& V) const {
    Vector V1(V);
    for (int i = 0; i < size; i++) 
        V1.component[i] = component[i] - V1.component[i];
    return V1;
}

double Vector::scal(const Vector& V) const {
    double m = 0;
    for (int i = 0; i < size; i++)
        m += component[i] * V.component[i];
    return m;
}