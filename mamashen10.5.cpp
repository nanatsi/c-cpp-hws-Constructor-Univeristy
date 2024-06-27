/*
CH-230-A
a10_p5.c
Daviti Katamadze
dkatamadze@constructor.university
*/

#include <iostream>
#include "Critter.h"

using namespace std;

double Critter::todouble(int newhunger) {
	return (double)newhunger / 10;
}

int Critter::toint(double newhunger) {
	return (int)(newhunger * 10);
}


void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = todouble(newhunger);
	//converting newhunger into double value for hunger

}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}


void Critter::print() {
	cout << "I am " << name << ". My hunger level is ";
	cout << toint(hunger) << "." << endl;
	cout << "My boredom level is " << boredom;
	cout << ". " << "My height is " << height << endl << endl;

	//converting double to int and printing it
}


int Critter::getHunger() {
	return hunger;
}

string Critter::getName() {
	return name;
}
//getter method for name

double Critter::getHeight() {
	return height;
}

int Critter::getBoredom() {
	return boredom;
}



Critter::Critter() {
	name = "default_critter";
	hunger = 0.2;
	boredom = 0;
	height = 5;
	cout << "Constructor used here doesn't need any properties." << endl;
}
//empty constructor which gives default name
//0 values to everything except height and hunger. Height is assigned 2.
//internal value of hunger should be 0.2.

Critter::Critter(std::string newname) {
	name = newname;
	hunger = 0.2;
	boredom = 0;
	height = 5;
	cout << "This constructor needs name of the Critter." << endl;
}
//constructor which gives critter name and
//0 values to everything except height and hunger. Height is assigned 2.
//internal value of hunger should be 0.2.


Critter::Critter(std::string newname, int newhunger,
	int newboredom, double newheight) {
	name = newname;
	hunger = todouble(newhunger);
	boredom = newboredom;
	height = newheight;
	cout << "This constructor uses every property" << endl;

}
//constructor which assigns name, hunger, boredom and height.


Critter::Critter(std::string newname, int newhunger, int newboredom) {
	name = newname;
	hunger = todouble(newhunger);
	boredom = newboredom;
	height = 10;
	cout << "This constructor uses name, hunger, and boredom." << endl;
}
//constructor which assigns name, hunger, and boredom. Height is
//automatically assigned 10.
