//CH - 230 - A
//a10.p4.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include "Critter.h"

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
    hunger = Hunger2;
    boredom = newBoredom;
    height = newHeight;
    std::cout << "this is a constructor with all parameters." << std::endl;
}

//sets hunger level
void Critter::sethunger(int newHunger) {
    hunger = newHunger;
}

//prints critter data
void Critter::printi() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hunger: " << hunger << std::endl;
    std::cout << "Boredom: " << boredom << std::endl;
    std::cout << "Height: " << height << std::endl;
}

