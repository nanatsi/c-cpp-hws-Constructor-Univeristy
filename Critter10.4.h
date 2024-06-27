//CH - 230 - A
//a10.p4.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include <string>

class Critter {
private:
    std::string name;
    int hunger;
    int boredom;
    double height;

public:
    /*constructors:*/

    Critter();
    Critter(std::string newName); 
    Critter(std::string newName, int Hunger2, int newBoredom, int newHeight = 10); 

    //other member functions
    void sethunger(int newHunger);
    void printi();
};

#endif 
