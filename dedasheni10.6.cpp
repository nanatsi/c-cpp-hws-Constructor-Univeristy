//CH - 230 - A
//a10.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include "Critter.h"



double Critter::convertToDouble(int newhunger) {
    return (double)newhunger / 10;
}

int Critter::convertToInt(double newhunger) {
    return (int)(newhunger * 10);
}

void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = convertToDouble(newhunger);
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}
void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

//prints critter data
void Critter::printi() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hunger: " << convertToInt(hunger) << std::endl;
    std::cout << "Boredom: " << boredom << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "thirst: " << convertToInt(thirst) << std::endl << std::endl;
}

std::string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return convertToInt(hunger);
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}
double Critter::getThirst() {
    return convertToInt(thirst);
}

//default constructor
Critter::Critter() {
    name = "default_critter";
    hunger = 0.2;
    boredom = 0;
    height = 5;
    thirst = hunger;
    std::cout << "this is a default constructor." << std::endl;
}

//constructor with name parameter
Critter::Critter(std::string newName) {
    name = newName;
    hunger = 0.2;
    boredom = 0;
    height = 5;
    thirst = hunger;
    std::cout << "this is a constructor with name parameter." << std::endl;
}

//constructor with all parameters
Critter::Critter(std::string newName, int Hunger2, int newBoredom, double newHeight) {
    name = newName;
    hunger = convertToDouble(Hunger2);
    boredom = newBoredom;
    height = newHeight;
    thirst = hunger;
    std::cout << "this is a constructor with all parameters." << std::endl;
}

Critter::Critter(std::string newname, int newhunger, int newboredom,
    double newheight, double newthirst) {
    // constructor with all parameters + thirst
    std::cout << "this is a constructor with everything." << std::endl;
    name = newname;
    hunger = convertToDouble(newhunger);
    boredom = newboredom;
    height = newheight;
    thirst = newthirst;
}