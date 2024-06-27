//CH - 230 - A
//a10.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "Critter.h"

using namespace std;

double Critter::convertToDouble(int hunger_) {
    return (double)hunger_ / 10;
}

int Critter::convertToInt(double hunger_) {
    return (int)(hunger_ * 10);
}

void Critter::setName(string& newname) {
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


string Critter::getName() {
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
//default constructor
Critter::Critter() {
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
    std::cout << "this is a default constructor." << std::endl;
}

//constructor with name parameter
Critter::Critter(std::string newName) {
    name = newName;
    hunger = 0;
    boredom = 0;
    height = 5;
    std::cout << "this is a constructor with name parameter." << std::endl;
}

//constructor with all parameters
Critter::Critter(std::string newName, int Hunger2, int newBoredom, int newHeight) {
    name = newName;
    hunger = convertToDouble(Hunger2);
    boredom = newBoredom;
    height = newHeight;
    std::cout << "this is a constructor with all parameters." << std::endl;
}
//prints critter data
void Critter::printi() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hunger: " << convertToInt(hunger) << std::endl;
    std::cout << "Boredom: " << boredom << std::endl;
    std::cout << "Height: " << height << std::endl;
}