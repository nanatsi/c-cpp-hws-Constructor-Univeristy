//CH - 230 - A
//a12.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;						
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int Fraction::lcm(int a, int b) 
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
//output stream operator to print
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
	out << f.num << "/" << f.den;
	return out;
}
//input stream operator to read the fraction
std::istream& operator>>(std::istream& in, Fraction& f) { 
	in >> f.num >> f.den; 

	return in; 
}
//using multiplication operator to multipy
Fraction Fraction::operator*(const Fraction& f) const {
	return Fraction(num * f.num, den * f.den);
}
//using division operator to divide
Fraction Fraction::operator/(const Fraction& f) const {
	return Fraction(num * f.den, den * f.num);
}



