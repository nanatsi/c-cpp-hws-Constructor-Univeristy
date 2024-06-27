/*
CH-230-A
a10_p5.c
Daviti Katamadze
dkatamadze@constructor.university
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    //hunger needs to be double for this problem
    int boredom;
    double height;


public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newHeight);

    double todouble(int newhunger);
    int toint(double newhunger);
    //new functions for conversions

    // getter method
    int getHunger();
    std::string getName();
    int getBoredom();
    double getHeight();

    Critter();
    //empty constructor which gives default name
    //0 values to everything except height and hunger. Height is assigned 2.
    //internal value of hunger should be 0.2.

    Critter(std::string newname);

    //constructor which gives critter name and
    //0 values to everything except height and hunger. Height is assigned 2.
    //internal value of hunger should be 0.2.



    Critter(std::string newname, int newhunger,
        int newboredom, double newheight);

    //constructor which assigns name, hunger, boredom and height.


    Critter(std::string newname, int newhunger, int newboredom);

    //constructor which assigns name, hunger, and boredom. Height is
    //automatically assigned 10.


        // service method
    void print();
};
