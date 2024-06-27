//CH - 230 - A
//a10.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de


#ifndef CRITTER_H
#define CRITTER_H

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    int boredom;
    double height;
    double convertToDouble(int hunger_);
    int convertToInt(double hunger_);

public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    // getter method
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    // service method
    void printi();

    // constructors
    Critter();
    Critter(std::string newname);
    Critter(std::string newName, int Hunger2, int newBoredom, int newHeight);
    Critter(std::string newname, int newhunger, int newboredom,
        double newheight = 10);
};
#endif

