//CH - 230 - A
//a12.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>

class Fraction {
private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b) const;		// calculates the gcd of a and b
	int lcm(int a, int b) const;

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
	// integers. Denominator by default is 1
	void print();				// prints it to the screen

	friend std::ostream& operator << (std::ostream& out, const Fraction& f);
	friend std::istream& operator >> (std::istream& in, Fraction& f);

	Fraction operator*(const Fraction& f) const;
	Fraction operator/(const Fraction& f) const;
	Fraction operator+(const Fraction& f) const;
	Fraction operator-(const Fraction& f) const;
	Fraction& operator=(const Fraction& f);
	bool operator<(const Fraction& f) const;
	bool operator>(const Fraction& f) const;


};
#endif

