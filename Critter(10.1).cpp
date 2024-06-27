//CH - 230 - A
//a10.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setWeight(double newweight) {
	weight=newweight;
}
void Critter::setAge(int newage) {
	age=newage;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter :: print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ",";
	cout << " My age is" << age << ". My weight is " << weight << "." << endl;
	
}

int Critter::getHunger() {
	return hunger;
}
int Critter::getAge() {
	return age;
}
double Critter::getWeight() {
	return weight;
}
